#ifndef CONNECTION12_SYNAPSE77_H_
#define CONNECTION12_SYNAPSE77_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse77 States
enum Connection12Synapse77States {
    CONNECTION12_SYNAPSE77_L,
};

// connection12_synapse77 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse77States state;
} Connection12Synapse77;

// connection12_synapse77 Initialisation function
void Connection12Synapse77Init(Connection12Synapse77* me);

// connection12_synapse77 Execution function
void Connection12Synapse77Run(Connection12Synapse77* me);

#endif // CONNECTION12_SYNAPSE77_H_