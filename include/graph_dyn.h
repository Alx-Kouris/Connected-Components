#ifndef GRAPH_DYN_H
#define GRAPH_DYN_H

#include "utilities.h"

class GraphDyn
{
	uint32_t _numNodes; // No. of vertices
	std::vector<uint32_t> *_adjacency; // An array of adjacency lists

public:
	explicit GraphDyn(uint32_t V);
	void addEdge(uint32_t &node, uint32_t &edge);
	void printGraph();

	uint32_t numNodes() const;//Returns number of nodes of the GraphDyn
	std::vector<uint32_t> outNeighs(uint32_t node) const;//Returns the outgoing vertices(neighborhood) of the (v) node
};

#endif // !GRAPH_DYN_H
