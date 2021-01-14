#ifndef CONNECTION12_SYNAPSE67_H_
#define CONNECTION12_SYNAPSE67_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse67 States
enum Connection12Synapse67States {
    CONNECTION12_SYNAPSE67_L,
};

// connection12_synapse67 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse67States state;
} Connection12Synapse67;

// connection12_synapse67 Initialisation function
void Connection12Synapse67Init(Connection12Synapse67* me);

// connection12_synapse67 Execution function
void Connection12Synapse67Run(Connection12Synapse67* me);

#endif // CONNECTION12_SYNAPSE67_H_