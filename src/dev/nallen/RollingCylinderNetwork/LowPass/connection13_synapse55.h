#ifndef CONNECTION13_SYNAPSE55_H_
#define CONNECTION13_SYNAPSE55_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse55 States
enum Connection13Synapse55States {
    CONNECTION13_SYNAPSE55_L,
};

// connection13_synapse55 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse55States state;
} Connection13Synapse55;

// connection13_synapse55 Initialisation function
void Connection13Synapse55Init(Connection13Synapse55* me);

// connection13_synapse55 Execution function
void Connection13Synapse55Run(Connection13Synapse55* me);

#endif // CONNECTION13_SYNAPSE55_H_