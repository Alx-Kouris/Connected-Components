#include "graph_dyn.h"

using namespace std;

GraphDyn::GraphDyn(uint16_t V)
{
	this->num_vert = V;
	adj = new vector<int>[V];
}

void GraphDyn::addEdge(uint16_t v, uint16_t w)
{
	adj[v].push_back(w); // Add w to v�s vector.
}

int GraphDyn::num_nodes() const
{
	return num_vert;
}

vector<int> GraphDyn::out_neighs(int v) const
{
	return adj[v];
}

void GraphDyn::printGraph()
{
	for (int k = 0; k < num_vert; k++) {
		cout << k << ": ";
		for (vector<int>::const_iterator i = adj[k].begin(); i != adj[k].end(); ++i) {
			cout << *i << ' ';
		}
		cout << endl;
	}

}