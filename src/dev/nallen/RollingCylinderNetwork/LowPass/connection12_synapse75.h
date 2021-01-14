#ifndef CONNECTION12_SYNAPSE75_H_
#define CONNECTION12_SYNAPSE75_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse75 States
enum Connection12Synapse75States {
    CONNECTION12_SYNAPSE75_L,
};

// connection12_synapse75 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse75States state;
} Connection12Synapse75;

// connection12_synapse75 Initialisation function
void Connection12Synapse75Init(Connection12Synapse75* me);

// connection12_synapse75 Execution function
void Connection12Synapse75Run(Connection12Synapse75* me);

#endif // CONNECTION12_SYNAPSE75_H_