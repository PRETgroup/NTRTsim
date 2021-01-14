#ifndef CONNECTION13_SYNAPSE29_H_
#define CONNECTION13_SYNAPSE29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse29 States
enum Connection13Synapse29States {
    CONNECTION13_SYNAPSE29_L,
};

// connection13_synapse29 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse29States state;
} Connection13Synapse29;

// connection13_synapse29 Initialisation function
void Connection13Synapse29Init(Connection13Synapse29* me);

// connection13_synapse29 Execution function
void Connection13Synapse29Run(Connection13Synapse29* me);

#endif // CONNECTION13_SYNAPSE29_H_