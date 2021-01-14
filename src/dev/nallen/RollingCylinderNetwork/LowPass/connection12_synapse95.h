#ifndef CONNECTION12_SYNAPSE95_H_
#define CONNECTION12_SYNAPSE95_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse95 States
enum Connection12Synapse95States {
    CONNECTION12_SYNAPSE95_L,
};

// connection12_synapse95 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse95States state;
} Connection12Synapse95;

// connection12_synapse95 Initialisation function
void Connection12Synapse95Init(Connection12Synapse95* me);

// connection12_synapse95 Execution function
void Connection12Synapse95Run(Connection12Synapse95* me);

#endif // CONNECTION12_SYNAPSE95_H_