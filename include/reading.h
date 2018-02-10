#ifndef READING_H
#define READING_H

#include "utilities.h"
#include "graph_dyn.h"
#include "graph.h"

void readEdgeListFile(GraphDyn &vectorGraph, Graph &arrayGraph, const std::string &filename);
void readGraphFile(GraphDyn &vectorGraph, Graph &arrayGraph, const std::string &filename);
std::string getSuffix(const std::string& filename);

#endif // !READING_H

