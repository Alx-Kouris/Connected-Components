#include "reading.h"

using namespace std;

void readEdgeListFile(GraphDyn &vectorGraph, Graph &arrayGraph, const string &filename) {
	ifstream infile;
	infile.open(filename);
	nodeID node, edge;
	while (infile >> node >> edge) {
		vectorGraph.addEdge(node, edge);
		arrayGraph.addEdge(node, edge);
	}
	infile.close();
}

void readGraphFile(GraphDyn &vectorGraph, Graph &arrayGraph, const string &filename) {
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

	nodeID node = 0;
	while (node < numNodes) {
		c = infile.peek();
		if (c == '%')
			infile.ignore(200, '\n');
		else {
			getline(infile, line);
			if (not line.empty()) {
				istringstream edge_stream(line);
				nodeID edge;
				while (edge_stream >> edge >> ws) {
					edge--;
					vectorGraph.addEdge(node, edge);
					arrayGraph.addEdge(node, edge);
				}
			}
			node++;
		}
	}
	cout << "Number of nodes: " << numNodes << endl;
	infile.close();
}

string getSuffix(const string& filename) {
	size_t suff_pos = filename.rfind('.');
	if (suff_pos == string::npos) {
		cout << "Could't find suffix of " << filename << std::endl;
		exit(-1);
	}
	return filename.substr(suff_pos+1);
}