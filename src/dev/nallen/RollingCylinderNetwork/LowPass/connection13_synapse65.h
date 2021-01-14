#ifndef CONNECTION13_SYNAPSE65_H_
#define CONNECTION13_SYNAPSE65_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse65 States
enum Connection13Synapse65States {
    CONNECTION13_SYNAPSE65_L,
};

// connection13_synapse65 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse65States state;
} Connection13Synapse65;

// connection13_synapse65 Initialisation function
void Connection13Synapse65Init(Connection13Synapse65* me);

// connection13_synapse65 Execution function
void Connection13Synapse65Run(Connection13Synapse65* me);

#endif // CONNECTION13_SYNAPSE65_H_