#ifndef SHILOACH_DYN_H
#define SHILOACH_DYN_H

#include "utilities.h"
#include "graph_dyn.h"

std::vector<nodeID> ShiloachVishkinDyn(const GraphDyn &g);
void PrintCompStatsDyn(const GraphDyn &g, const std::vector<nodeID> &comp);

#endif
