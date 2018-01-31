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
	cout << "Filename: " << argv[1] << endl;
	const string& filename = argv[1];

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Initialize Graphs and read them file.
	cout << "Creating graphs..." << endl;
	GraphDyn gr(NODES);
	Graph g(NODES);

	nodeID *comp, *comp2;
	comp = (nodeID *)malloc(NODES*sizeof(nodeID));
	comp2 = (nodeID *)malloc(NODES*sizeof(nodeID));
	cout << "Graphs created." << endl;

	cout << "Reading files..." << endl;
	const auto suffix = getSuffix(filename);
	const auto read_time = clock();
	if (suffix == ".graph") {
		readGraphFile(gr, g, filename);
	}
	else if (suffix == ".el") {
		readEdgeListFile(gr, g, filename);
	}
	cout << "Reading finished." << endl;
	cout << "Reading took " << float(clock() - read_time) / CLOCKS_PER_SEC << "secs." << endl << endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Hardware accelerated
	const auto hw_time = clock();
	ShiloachVishkin_HW(comp, g.graph);
	const auto hw_t = float(clock() - hw_time) / CLOCKS_PER_SEC;
	cout << hw_t << "secs." << endl;


	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Dynamic memory allocation
	const auto dyn_time = clock();
	const auto result = ShiloachVishkinDyn(gr);
	const auto dyn_t = float(clock() - dyn_time) / CLOCKS_PER_SEC;
	cout << dyn_t << "secs." << endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Print results and speedup
	PrintCompStats(comp);
	PrintCompStatsDyn(gr, result);
	cout << "Speed up from dynamic: " << dyn_t / hw_t << endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Free allocated memory
	free(comp);
	free(comp2);
	free(g.graph);
	exit (0);
}
