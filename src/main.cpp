#include "utilities.h"
#include "graph_dyn.h"
#include "graph.h"
#include "reading.h"
#include "shiloach_dynamic.h"
#include "shiloach.h"

using namespace std;

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

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Initialize Graphs and read them file.
	cout << "Creating graphs..." << endl;
	GraphDyn vectorGraph(NODES);
	Graph arrayGraph(NODES);

	nodeID *comp, *comp2;
	comp = (nodeID *)malloc(NODES*sizeof(nodeID));
	comp2 = (nodeID *)malloc(NODES*sizeof(nodeID));
	cout << "Graphs created." << endl;

	cout << "Reading files..." << endl;
	const auto suffix = getSuffix(filename);
	const auto read_time = clock();
	if (suffix == ".graph") {
		readGraphFile(vectorGraph, arrayGraph, filename);
	}
	else if (suffix == ".el") {
		readEdgeListFile(vectorGraph, arrayGraph, filename);
	}
	cout << "Reading finished." << endl;
	cout << "Reading took " << float(clock() - read_time) / CLOCKS_PER_SEC << "secs." << endl << endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Hardware accelerated
	const auto hw_time = clock();
	ShiloachVishkin_HW(comp, arrayGraph._graph);
	const auto hw_t = float(clock() - hw_time) / CLOCKS_PER_SEC;
	cout << hw_t << "secs." << endl;
  PrintCompStats(comp);
  free(comp);

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Dynamic memory allocation
	const auto dyn_time = clock();
	const auto result = ShiloachVishkinDyn(vectorGraph);
	const auto dyn_t = float(clock() - dyn_time) / CLOCKS_PER_SEC;
	cout << dyn_t << "secs." << endl;
  PrintCompStatsDyn(vectorGraph, result);
  free(comp2);

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Print results and speedup
	cout << "Speed up from dynamic: " << dyn_t / hw_t << endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Free allocated memory
	free(arrayGraph._graph);
	exit (0);
}
