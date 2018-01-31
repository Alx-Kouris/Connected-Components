#ifndef SHILOACH_H
#define SHILOACH_H

#include "utilities.h"

void ShiloachVishkin_HW(nodeID *comp, int16_t *graph);
void Create_HW(nodeID comp[NODES]);
void CopyComp_HW(nodeID comp_in[NODES], nodeID comp_out[NODES]);
void Inner_HW(nodeID *comp_in, nodeID *comp_out, int16_t *g, bool &flag);
void PrintCompStats(nodeID *comp);

#endif // !SHILOACH_H


