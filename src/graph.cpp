#include "graph.h"

using namespace std;

uint16_t Graph::NumNodes()
{
	return num_nodes;
}

void Graph::addEdge(uint16_t r, uint16_t n)
{
	for (size_t i = 0; i < COLS; i++) {
		if (graph[(r*COLS) + i] == -1) {
			graph[(r*COLS) + i] = n;
			break;
		}
	}
}

Graph::Graph(uint16_t n)
{
	graph = (int16_t *)malloc(ROWS*COLS * sizeof(int16_t));
	fill(graph,graph + sizeof(graph), -1);
	this->num_nodes = n;
}

Graph::Graph()
{
	fill(graph,graph + sizeof(graph), -1);
	this->num_nodes = 0;
}

void Graph::PrintGraph()
{
	for (int i = 0; i<ROWS; i++) {
		cout << i << ": ";
		for (int j = 0; j<COLS; j++) {
			cout << graph[(i * COLS) + j] << ' ';
		}
		cout << endl;
	}
}
