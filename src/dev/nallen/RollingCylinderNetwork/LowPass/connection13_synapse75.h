#ifndef CONNECTION13_SYNAPSE75_H_
#define CONNECTION13_SYNAPSE75_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse75 States
enum Connection13Synapse75States {
    CONNECTION13_SYNAPSE75_L,
};

// connection13_synapse75 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse75States state;
} Connection13Synapse75;

// connection13_synapse75 Initialisation function
void Connection13Synapse75Init(Connection13Synapse75* me);

// connection13_synapse75 Execution function
void Connection13Synapse75Run(Connection13Synapse75* me);

#endif // CONNECTION13_SYNAPSE75_H_