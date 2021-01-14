#ifndef CONNECTION12_SYNAPSE42_H_
#define CONNECTION12_SYNAPSE42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse42 States
enum Connection12Synapse42States {
    CONNECTION12_SYNAPSE42_L,
};

// connection12_synapse42 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse42States state;
} Connection12Synapse42;

// connection12_synapse42 Initialisation function
void Connection12Synapse42Init(Connection12Synapse42* me);

// connection12_synapse42 Execution function
void Connection12Synapse42Run(Connection12Synapse42* me);

#endif // CONNECTION12_SYNAPSE42_H_