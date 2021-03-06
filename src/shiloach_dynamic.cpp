#include "shiloach_dynamic.h"

using namespace std;

vector<nodeID> ShiloachVishkinDyn(const GraphDyn &g) {
	vector<nodeID> comp(g.numNodes());
	for (nodeID n = 0; n < g.numNodes(); n++)
		comp[n] = n;
	bool change = true;
	int num_iter = 0;
	while (change) {
		change = false;
		num_iter++;
		for (nodeID u = 0; u < g.numNodes(); u++) {
			nodeID comp_u = comp[u];
			for (nodeID v : g.outNeighs(u)) {
				nodeID comp_v = comp[v];
				if ((comp_u < comp_v) and (comp_v == comp[comp_v])) {
					change = true;
					comp[comp_v] = comp_u;
				}
			}
		}

		for (nodeID n = 0; n < g.numNodes(); n++) {
			while (comp[n] != comp[comp[n]]) {
				comp[n] = comp[comp[n]];
			}
		}
	}

	cout << "Dynamic took " << num_iter << " iterations and ";
	return comp;
}

void PrintCompStatsDyn(const GraphDyn &g, const vector<nodeID> &comp) {
	unordered_map<nodeID, nodeID> count;
	for (nodeID comp_i : comp)
		count[comp_i] += 1;

	cout << "There are " << count.size() << " components." << endl << endl;
}