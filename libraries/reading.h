#ifndef READING_H
#define READING_H

#include "utilities.h"

void readfile(GraphDyn &grd, Graph &gr, string el_name);
void readGraph(GraphDyn &grd, Graph &gr, string name);
string GetSuffix(string filename);

#endif // !READING_H
