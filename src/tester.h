//
// Created by calin on 13-Dec-23.
//

#ifndef ARCHITECTURES_M1_PROJECT_TESTER_H
#define ARCHITECTURES_M1_PROJECT_TESTER_H

#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdbool.h>
#include "utils.h"
#include "graph_file_reader.h"
#include "bellman_ford.h"
#include "cu_bellman_ford.cuh"

bool tester(bool cuda, char* dir_in, char* dir_out);

#endif //ARCHITECTURES_M1_PROJECT_TESTER_H
