#ifndef CONNECTION13_SYNAPSE42_H_
#define CONNECTION13_SYNAPSE42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse42 States
enum Connection13Synapse42States {
    CONNECTION13_SYNAPSE42_L,
};

// connection13_synapse42 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse42States state;
} Connection13Synapse42;

// connection13_synapse42 Initialisation function
void Connection13Synapse42Init(Connection13Synapse42* me);

// connection13_synapse42 Execution function
void Connection13Synapse42Run(Connection13Synapse42* me);

#endif // CONNECTION13_SYNAPSE42_H_