#ifndef CONNECTION13_SYNAPSE17_H_
#define CONNECTION13_SYNAPSE17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse17 States
enum Connection13Synapse17States {
    CONNECTION13_SYNAPSE17_L,
};

// connection13_synapse17 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse17States state;
} Connection13Synapse17;

// connection13_synapse17 Initialisation function
void Connection13Synapse17Init(Connection13Synapse17* me);

// connection13_synapse17 Execution function
void Connection13Synapse17Run(Connection13Synapse17* me);

#endif // CONNECTION13_SYNAPSE17_H_