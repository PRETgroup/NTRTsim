#ifndef CONNECTION12_SYNAPSE10_H_
#define CONNECTION12_SYNAPSE10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse10 States
enum Connection12Synapse10States {
    CONNECTION12_SYNAPSE10_L,
};

// connection12_synapse10 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse10States state;
} Connection12Synapse10;

// connection12_synapse10 Initialisation function
void Connection12Synapse10Init(Connection12Synapse10* me);

// connection12_synapse10 Execution function
void Connection12Synapse10Run(Connection12Synapse10* me);

#endif // CONNECTION12_SYNAPSE10_H_