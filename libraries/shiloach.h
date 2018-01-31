#ifndef SHILOACH_H
#define SHILOACH_H

#include "utilities.h"

void ShiloachVishkin_HW(nodeID *comp, int16_t *g);
void Create_HW(nodeID comp[NODES]);
void CopyComp_HW(nodeID comp_in[NODES], nodeID comp_out[NODES]);
void Inner_HW(nodeID comp_in[NODES], nodeID comp_out[NODES], int g[ROWS * COLS], bool &flag);

#endif // !SHILOACH_H


