#ifndef CONNECTION12_SYNAPSE55_H_
#define CONNECTION12_SYNAPSE55_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse55 States
enum Connection12Synapse55States {
    CONNECTION12_SYNAPSE55_L,
};

// connection12_synapse55 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse55States state;
} Connection12Synapse55;

// connection12_synapse55 Initialisation function
void Connection12Synapse55Init(Connection12Synapse55* me);

// connection12_synapse55 Execution function
void Connection12Synapse55Run(Connection12Synapse55* me);

#endif // CONNECTION12_SYNAPSE55_H_