#include "graph.h"

using namespace std;

uint16_t Graph::numNodes()
{
	return _num_nodes;
}

void Graph::addEdge(uint16_t &r, uint16_t &n)
{
	for (size_t i = 0; i < COLS; i++) {
		if (_graph[(r*COLS) + i] == -1) {
			_graph[(r*COLS) + i] = n;
			break;
		}
	}
}

Graph::Graph(uint16_t n)
{
	_graph = (int16_t *)malloc(ROWS*COLS * sizeof(int16_t));
	fill(_graph,_graph + ROWS*COLS, -1);
//	for (size_t i = 0; i<ROWS; i++) {
//		for (size_t j = 0; j<COLS; j++) {
//			_graph[(i * COLS) + j] = -1;
//		}
//	}
	this->_num_nodes = n;
}

Graph::Graph()
{
	fill(_graph,_graph + sizeof(_graph), -1);
	this->_num_nodes = 0;
}

void Graph::printGraph()
{
	for (size_t i = 0; i<ROWS; i++) {
		cout << i << ": ";
		for (size_t j = 0; j<COLS; j++) {
			cout << _graph[(i * COLS) + j] << ' ';
		}
		cout << endl;
	}
}
