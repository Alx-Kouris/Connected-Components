#include "graph_dyn.h"

using namespace std;

GraphDyn::GraphDyn(uint32_t V)
{
	this->_numNodes = V;
	_adjacency = new vector<uint32_t >[V];
}

void GraphDyn::addEdge(uint32_t &node, uint32_t &edge)
{
	_adjacency[node].push_back(edge); // Add w to v's vector.
}

uint32_t GraphDyn::numNodes() const
{
	return _numNodes;
}

vector<uint32_t> GraphDyn::outNeighs(uint32_t node) const
{
	return _adjacency[node];
}

void GraphDyn::printGraph()
{
	for (size_t k = 0; k < _numNodes; k++) {
		cout << k << ": ";
		for (vector<uint32_t>::const_iterator i = _adjacency[k].begin(); i != _adjacency[k].end(); ++i) {
			cout << *i << ' ';
		}
		cout << endl;
	}

}