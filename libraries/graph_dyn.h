#ifndef GRAPH_DYN_H
#define GRAPH_DYN_H

#include "utilities.h"

class GraphDyn
{
	int num_vert; // No. of vertices
	std::vector<int> *adj; // An array of adjacency lists

public:
	GraphDyn(uint16_t V);
	void addEdge(uint16_t v, uint16_t w);
	void printGraph();

	int num_nodes() const;//Returns number of nodes of the GraphDyn
	std::vector<int> out_neighs(int v) const;//Returns the outgoing vertices(neighborhood) of the (v) node
};

#endif // !GRAPH_DYN_H
