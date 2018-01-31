#ifndef GRAPH_H
#define GRAPH_H

#include "shiloach.h"

class Graph {
public:
	Graph();
	Graph(uint16_t);
	int16_t *graph;

	void addEdge(uint16_t , uint16_t);
	void PrintGraph();
	uint32_t NumNodes();

private:
	uint32_t num_nodes;
};

#endif // !GRAPH_H
