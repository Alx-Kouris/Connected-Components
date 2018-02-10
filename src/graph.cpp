#include "graph.h"

using namespace std;

uint32_t Graph::numNodes()
{
	return _num_nodes;
}

void Graph::addEdge(uint32_t &node, uint32_t &edge)
{
	for (size_t i = 0; i < COLS; i++) {
		if (_graph[(node*COLS) + i] == -1 and _graph[(node*COLS) + i] != static_cast<int32_t >(edge)) {
			_graph[(node*COLS) + i] = edge;
			break;
		}
	}
}

Graph::Graph(uint32_t nodes)
{
	_graph = (int32_t *)malloc(ROWS*COLS * sizeof(int32_t));
	fill(_graph,_graph + ROWS*COLS, -1);
	this->_num_nodes = nodes;
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
