#ifndef CONNECTION12_SYNAPSE15_H_
#define CONNECTION12_SYNAPSE15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse15 States
enum Connection12Synapse15States {
    CONNECTION12_SYNAPSE15_L,
};

// connection12_synapse15 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse15States state;
} Connection12Synapse15;

// connection12_synapse15 Initialisation function
void Connection12Synapse15Init(Connection12Synapse15* me);

// connection12_synapse15 Execution function
void Connection12Synapse15Run(Connection12Synapse15* me);

#endif // CONNECTION12_SYNAPSE15_H_