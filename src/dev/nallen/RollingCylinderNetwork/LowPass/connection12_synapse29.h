#ifndef CONNECTION12_SYNAPSE29_H_
#define CONNECTION12_SYNAPSE29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse29 States
enum Connection12Synapse29States {
    CONNECTION12_SYNAPSE29_L,
};

// connection12_synapse29 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse29States state;
} Connection12Synapse29;

// connection12_synapse29 Initialisation function
void Connection12Synapse29Init(Connection12Synapse29* me);

// connection12_synapse29 Execution function
void Connection12Synapse29Run(Connection12Synapse29* me);

#endif // CONNECTION12_SYNAPSE29_H_