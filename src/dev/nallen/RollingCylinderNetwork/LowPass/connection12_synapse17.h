#ifndef CONNECTION12_SYNAPSE17_H_
#define CONNECTION12_SYNAPSE17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse17 States
enum Connection12Synapse17States {
    CONNECTION12_SYNAPSE17_L,
};

// connection12_synapse17 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse17States state;
} Connection12Synapse17;

// connection12_synapse17 Initialisation function
void Connection12Synapse17Init(Connection12Synapse17* me);

// connection12_synapse17 Execution function
void Connection12Synapse17Run(Connection12Synapse17* me);

#endif // CONNECTION12_SYNAPSE17_H_