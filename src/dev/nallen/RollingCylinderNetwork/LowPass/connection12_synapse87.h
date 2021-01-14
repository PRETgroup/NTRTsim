#ifndef CONNECTION12_SYNAPSE87_H_
#define CONNECTION12_SYNAPSE87_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse87 States
enum Connection12Synapse87States {
    CONNECTION12_SYNAPSE87_L,
};

// connection12_synapse87 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse87States state;
} Connection12Synapse87;

// connection12_synapse87 Initialisation function
void Connection12Synapse87Init(Connection12Synapse87* me);

// connection12_synapse87 Execution function
void Connection12Synapse87Run(Connection12Synapse87* me);

#endif // CONNECTION12_SYNAPSE87_H_