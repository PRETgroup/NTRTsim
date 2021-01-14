#ifndef CONNECTION12_SYNAPSE65_H_
#define CONNECTION12_SYNAPSE65_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse65 States
enum Connection12Synapse65States {
    CONNECTION12_SYNAPSE65_L,
};

// connection12_synapse65 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse65States state;
} Connection12Synapse65;

// connection12_synapse65 Initialisation function
void Connection12Synapse65Init(Connection12Synapse65* me);

// connection12_synapse65 Execution function
void Connection12Synapse65Run(Connection12Synapse65* me);

#endif // CONNECTION12_SYNAPSE65_H_