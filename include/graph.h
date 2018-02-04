#ifndef GRAPH_H
#define GRAPH_H

#include "utilities.h"

class Graph {
public:
	Graph();
	explicit Graph(uint16_t);
  int16_t *_graph;

	void addEdge(uint16_t &r, uint16_t &n);
	void printGraph();
	uint16_t numNodes();

private:
	uint16_t _num_nodes;
};

#endif // !GRAPH_H
