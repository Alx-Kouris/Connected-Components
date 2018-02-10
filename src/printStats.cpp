//
// Created by alex on 2/10/18.
//

#include "utilities.h"

using namespace std;

string getSuffix(const string& filename)
{
  size_t suff_pos = filename.rfind('.');
  if (suff_pos == string::npos) {
    cout << "Could't find suffix of " << filename << std::endl;
    exit(-1);
  }
  return filename.substr(suff_pos+1);
}

void printStatsEdgeList(const string& filename)
{
  ifstream infile(filename);
  nodeID node, edge, maxNodeIndex = 0, nodeIndex=0;
  uint64_t previousNodeEdgesNum=0, currentNodeEdgesNum=0, maxEdgeCount=0;
  bool foundZero = false;
  while (infile >> node >> edge) {
    if (node > nodeIndex) {
      maxEdgeCount=max(previousNodeEdgesNum,currentNodeEdgesNum);
      previousNodeEdgesNum=currentNodeEdgesNum;
      nodeIndex = node;
      currentNodeEdgesNum=0;
    }
    currentNodeEdgesNum++;
    maxNodeIndex = max(max(node,edge),maxNodeIndex);
    if (node == 0 or edge == 0)
      foundZero = true;
  }

  cout << "Number of nodes: " << (foundZero ? ++maxNodeIndex : maxNodeIndex) << endl;
  cout << "Max number of edges of a node: " << maxEdgeCount << endl;
  infile.close();
}

void printStatsGraph(const string& filename)
{
  ifstream infile(filename);
  string line;
  int32_t c;
  uint32_t numNodes, numEdges;
  while (true){
    c = infile.peek();
    if (c == '%')
      infile.ignore(200, '\n');
    else {
      getline(infile, line, '\n');
      istringstream header_stream(line);
      header_stream >> numNodes >> numEdges >> ws;
      if (not header_stream.eof()) {
        int32_t fmt=-1;
        header_stream >> fmt;
        if (fmt != -1) {
          cout << "Do not support this type of METIS graph type" << endl;
        }
      }
      break;
    }
  }

  nodeID nodes = 0, edges = 0;
  uint64_t maxLineEdges = 0;
  while (nodes < numNodes) {
    c = infile.peek();
    if (c == '%')
      infile.ignore(200, '\n');
    else {
      getline(infile, line);
      if (not line.empty()) {
        istringstream edge_stream(line);
        nodeID edge;
        uint64_t lineNumEdges = 0;
        while (edge_stream >> edge >> ws) {
          edge--;
          lineNumEdges++;
          edges++;
        }
        maxLineEdges = max(maxLineEdges,lineNumEdges);
      }
      nodes++;
    }
  }
  cout << "Number of nodes from first line: " << numNodes << endl;
  cout << "Number of nodes by counting: " << nodes << endl << endl;

  cout << "Number of edges from first line: " << numEdges << endl;
  cout << "Number of edges by counting: " << edges << endl << endl;

  cout << "Max number of edges in a node: " << maxLineEdges << endl;
  infile.close();
}

int main(int argc, char* argv[])
{
  //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // Read filename
  if (argv[1] == nullptr) {
    cout << "Usage: cc <graph_file>" << endl;
    exit(-1);
  }
  cout << "Filename: " << argv[1] << endl;
  const string& filename = argv[1];

  const auto suf = getSuffix(filename);
  cout << "File is in " << ((suf=="el") ? "edge list" : (suf=="graph" ? "METIS graph" : suf)) << " format." << endl;

  if (suf == "el") printStatsEdgeList(filename);
  else if (suf == "graph") printStatsGraph(filename);
  else cout << "File format not supported" << endl;
}
