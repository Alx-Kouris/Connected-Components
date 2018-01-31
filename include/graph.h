#ifndef GRAPH_H
#define GRAPH_H

#include "utilities.h"

class Graph {
public:
	Graph();
	explicit Graph(uint16_t);
	int16_t *graph;

	void addEdge(uint16_t , uint16_t);
	void PrintGraph();
	uint16_t NumNodes();

private:
	uint16_t num_nodes;
};

#endif // !GRAPH_H
