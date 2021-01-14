#ifndef CONNECTION13_SYNAPSE89_H_
#define CONNECTION13_SYNAPSE89_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse89 States
enum Connection13Synapse89States {
    CONNECTION13_SYNAPSE89_L,
};

// connection13_synapse89 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse89States state;
} Connection13Synapse89;

// connection13_synapse89 Initialisation function
void Connection13Synapse89Init(Connection13Synapse89* me);

// connection13_synapse89 Execution function
void Connection13Synapse89Run(Connection13Synapse89* me);

#endif // CONNECTION13_SYNAPSE89_H_