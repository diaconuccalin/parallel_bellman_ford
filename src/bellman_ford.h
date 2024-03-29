//
// Created by calin on 12-Dec-23.
//

#ifndef ARCHITECTURES_M1_PROJECT_BELLMAN_FORD_H
#define ARCHITECTURES_M1_PROJECT_BELLMAN_FORD_H

#include "graph_structs.h"
#include "timing.h"

#include <limits.h>
#include <omp.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

bool bellman_ford(graph *G, node *s);

#endif //ARCHITECTURES_M1_PROJECT_BELLMAN_FORD_H
