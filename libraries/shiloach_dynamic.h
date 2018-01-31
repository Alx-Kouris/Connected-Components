#ifndef SHILOACH_DYN_H
#define SHILOACH_DYN_H

#include "utilities.h"

vector<nodeID> ShiloachVishkinDyn(const GraphDyn &g);
void PrintCompStatsDyn(const GraphDyn &g, const vector<nodeID> &comp);

#endif
