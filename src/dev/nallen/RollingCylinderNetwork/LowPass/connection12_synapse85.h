#ifndef CONNECTION12_SYNAPSE85_H_
#define CONNECTION12_SYNAPSE85_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse85 States
enum Connection12Synapse85States {
    CONNECTION12_SYNAPSE85_L,
};

// connection12_synapse85 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse85States state;
} Connection12Synapse85;

// connection12_synapse85 Initialisation function
void Connection12Synapse85Init(Connection12Synapse85* me);

// connection12_synapse85 Execution function
void Connection12Synapse85Run(Connection12Synapse85* me);

#endif // CONNECTION12_SYNAPSE85_H_