#include "shiloach.h"

void ShiloachVishkin_HW(nodeID *comp, int16_t *g) {
	nodeID *compBUFFER;
	compBUFFER = (nodeID *)malloc(NODES * sizeof(nodeID));
	Create_HW(compBUFFER);
	bool flag = true;
	short iterations=0;
	while (flag) {
		flag = false;
		iterations++;
		Inner_HW(compBUFFER, comp, g, flag);
		if (!flag) break;
		CopyComp_HW(comp, compBUFFER);
	}

	std::cout << "Accelerator took " << iterations << " iterations and ";
	free(compBUFFER);
}

void Create_HW(nodeID comp[NODES]) {
	for (nodeID i = 0; i < NODES; i++) {
		comp[i] = i;
	}
}

void CopyComp_HW(nodeID comp_in[NODES], nodeID comp_out[NODES]) {
	for (size_t i = 0; i < NODES; i++) {
		comp_out[i] = comp_in[i];
	}
}

void Inner_HW(nodeID comp_in[NODES], nodeID comp_out[NODES], int g[ROWS * COLS], bool &flag) {
	nodeID compBUFF[NODES];
	for (size_t i = 0; i < NODES; i++) {
		compBUFF[i] = comp_in[i];
	}

	for (size_t u = 0; u < NODES; u++) {
		nodeID comp_u = compBUFF[u];
		for (size_t v = 0; v < COLS; v++) {
			if (g[(u * COLS) + v] != -1) {
				nodeID comp_v = compBUFF[g[(u * COLS) + v]];
				if ((comp_u < comp_v) && (comp_v == compBUFF[comp_v])) {
					compBUFF[comp_v] = comp_u;
					flag = true;
				}
			}
		}
	}

	for (size_t n = 0; n < NODES; n++) {
		if (compBUFF[n] != compBUFF[compBUFF[n]])
			compBUFF[n] = compBUFF[compBUFF[n]];
	}

	for (size_t i = 0; i < NODES; i++)
		comp_out[i] = compBUFF[i];
}
