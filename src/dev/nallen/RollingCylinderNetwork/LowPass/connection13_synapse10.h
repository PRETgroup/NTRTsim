#ifndef CONNECTION13_SYNAPSE10_H_
#define CONNECTION13_SYNAPSE10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse10 States
enum Connection13Synapse10States {
    CONNECTION13_SYNAPSE10_L,
};

// connection13_synapse10 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse10States state;
} Connection13Synapse10;

// connection13_synapse10 Initialisation function
void Connection13Synapse10Init(Connection13Synapse10* me);

// connection13_synapse10 Execution function
void Connection13Synapse10Run(Connection13Synapse10* me);

#endif // CONNECTION13_SYNAPSE10_H_