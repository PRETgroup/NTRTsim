#ifndef CONNECTION12_SYNAPSE60_H_
#define CONNECTION12_SYNAPSE60_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse60 States
enum Connection12Synapse60States {
    CONNECTION12_SYNAPSE60_L,
};

// connection12_synapse60 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse60States state;
} Connection12Synapse60;

// connection12_synapse60 Initialisation function
void Connection12Synapse60Init(Connection12Synapse60* me);

// connection12_synapse60 Execution function
void Connection12Synapse60Run(Connection12Synapse60* me);

#endif // CONNECTION12_SYNAPSE60_H_