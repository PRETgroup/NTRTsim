#ifndef CONNECTION13_SYNAPSE67_H_
#define CONNECTION13_SYNAPSE67_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse67 States
enum Connection13Synapse67States {
    CONNECTION13_SYNAPSE67_L,
};

// connection13_synapse67 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse67States state;
} Connection13Synapse67;

// connection13_synapse67 Initialisation function
void Connection13Synapse67Init(Connection13Synapse67* me);

// connection13_synapse67 Execution function
void Connection13Synapse67Run(Connection13Synapse67* me);

#endif // CONNECTION13_SYNAPSE67_H_