#include "utilities.h"

using namespace std;

void PrintCompStats(nodeID *comp) {
	unordered_map<nodeID, nodeID> count;
	nodeID comp_i;
	for (nodeID i = 0; i < NODES; i++) {
		comp_i = comp[i];
		count[comp_i] += 1;
	}
	cout << "There are " << count.size() << " components." << endl << endl;
}

int main(int argc, char* argv[])
{
	//Choose edge list
	cout << "Filename: " << argv[1] << endl;
	string el = argv[1];
	
	//Initialize Graphs and read them from edge list.
	cout << "Creating graphs..." << endl;
	GraphDyn gr(NODES);
	Graph g(NODES);
	nodeID *comp, *comp2;
	comp = (nodeID *)malloc(NODES*sizeof(nodeID));
	comp2 = (nodeID *)malloc(NODES*sizeof(nodeID));
	cout << "Graphs created." << endl;

	cout << "Reading files..." << endl;
	const string suffix = GetSuffix(el);
	const clock_t read_time = clock();
	if (suffix == ".graph") {
		readGraph(gr, g, el);
	}
	else if (suffix == ".el") {
		readfile(gr, g, el);
	}
	cout << "Reading finished." << endl;
	cout << "Reading took " << float(clock() - read_time) / CLOCKS_PER_SEC << "secs." << endl << endl;

	//Hardware accelerated
	const clock_t hw_time = clock();
	ShiloachVishkin_HW(comp, g.graph);
	float hw_t = float(clock() - hw_time) / CLOCKS_PER_SEC;
	cout << hw_t << "secs." << endl;
	PrintCompStats(comp);
	
	//Dynamic memory allocation
		const clock_t dyn_time = clock();
	vector<nodeID> result = ShiloachVishkinDyn(gr);
	float dyn_t = float(clock() - dyn_time) / CLOCKS_PER_SEC;
	cout << dyn_t << "secs." << endl;
	PrintCompStatsDyn(gr, result);

	cout << "Speed up from dynamic: " << dyn_t / hw_t << endl;

	free(comp);
	free(comp2);
	free(g.graph);
	exit (0);
}
