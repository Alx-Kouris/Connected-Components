#ifndef UTILITIES_H
#define UTILITIES_H

#include <cstdio>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

#include "shiloach_dynamic.h"
#include "graph.h"
#include "graph_dyn.h"
#include "reading.h"

static const uint32_t NODES = 15000;
static const uint32_t ROWS = 15000;
static const uint32_t COLS = 5000;
static const uint32_t ITERS = 4;

typedef uint32_t nodeID;