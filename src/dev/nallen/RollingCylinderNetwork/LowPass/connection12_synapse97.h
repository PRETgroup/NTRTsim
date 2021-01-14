#ifndef CONNECTION12_SYNAPSE97_H_
#define CONNECTION12_SYNAPSE97_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse97 States
enum Connection12Synapse97States {
    CONNECTION12_SYNAPSE97_L,
};

// connection12_synapse97 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse97States state;
} Connection12Synapse97;

// connection12_synapse97 Initialisation function
void Connection12Synapse97Init(Connection12Synapse97* me);

// connection12_synapse97 Execution function
void Connection12Synapse97Run(Connection12Synapse97* me);

#endif // CONNECTION12_SYNAPSE97_H_