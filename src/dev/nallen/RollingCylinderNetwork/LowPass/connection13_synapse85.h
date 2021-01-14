#ifndef CONNECTION13_SYNAPSE85_H_
#define CONNECTION13_SYNAPSE85_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse85 States
enum Connection13Synapse85States {
    CONNECTION13_SYNAPSE85_L,
};

// connection13_synapse85 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse85States state;
} Connection13Synapse85;

// connection13_synapse85 Initialisation function
void Connection13Synapse85Init(Connection13Synapse85* me);

// connection13_synapse85 Execution function
void Connection13Synapse85Run(Connection13Synapse85* me);

#endif // CONNECTION13_SYNAPSE85_H_