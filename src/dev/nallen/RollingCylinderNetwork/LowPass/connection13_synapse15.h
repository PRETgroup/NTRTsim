#ifndef CONNECTION13_SYNAPSE15_H_
#define CONNECTION13_SYNAPSE15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse15 States
enum Connection13Synapse15States {
    CONNECTION13_SYNAPSE15_L,
};

// connection13_synapse15 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse15States state;
} Connection13Synapse15;

// connection13_synapse15 Initialisation function
void Connection13Synapse15Init(Connection13Synapse15* me);

// connection13_synapse15 Execution function
void Connection13Synapse15Run(Connection13Synapse15* me);

#endif // CONNECTION13_SYNAPSE15_H_