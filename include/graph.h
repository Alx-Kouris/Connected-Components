#ifndef GRAPH_H
#define GRAPH_H

#include "utilities.h"

class Graph {
public:
	Graph();
	explicit Graph(uint32_t nodes);
  int32_t *_graph;

	void addEdge(uint32_t &node, uint32_t &edge);
	void printGraph();
	uint32_t numNodes();

private:
	uint32_t _num_nodes;
};

#endif // !GRAPH_H
