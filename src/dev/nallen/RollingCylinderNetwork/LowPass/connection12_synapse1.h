#ifndef CONNECTION12_SYNAPSE1_H_
#define CONNECTION12_SYNAPSE1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse1 States
enum Connection12Synapse1States {
    CONNECTION12_SYNAPSE1_L,
};

// connection12_synapse1 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse1States state;
} Connection12Synapse1;

// connection12_synapse1 Initialisation function
void Connection12Synapse1Init(Connection12Synapse1* me);

// connection12_synapse1 Execution function
void Connection12Synapse1Run(Connection12Synapse1* me);

#endif // CONNECTION12_SYNAPSE1_H_