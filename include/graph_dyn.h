#ifndef GRAPH_DYN_H
#define GRAPH_DYN_H

#include "utilities.h"

class GraphDyn
{
	uint16_t num_vert; // No. of vertices
	std::vector<uint16_t> *adj; // An array of adjacency lists

public:
	explicit GraphDyn(uint16_t V);
	void addEdge(uint16_t &v, uint16_t &w);
	void printGraph();

	uint16_t numNodes() const;//Returns number of nodes of the GraphDyn
	std::vector<uint16_t> outNeighs(uint16_t v) const;//Returns the outgoing vertices(neighborhood) of the (v) node
};

#endif // !GRAPH_DYN_H
