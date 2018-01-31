#ifndef READING_H
#define READING_H

#include "utilities.h"
#include "graph_dyn.h"
#include "graph.h"

void readEdgeListFile(GraphDyn &grd, Graph &gr, const std::string &filename);
void readGraphFile(GraphDyn &grd, Graph &gr, const std::string &filename);
std::string getSuffix(std::string filename);

#endif // !READING_H
