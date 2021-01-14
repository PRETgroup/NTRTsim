#ifndef CONNECTION12_SYNAPSE27_H_
#define CONNECTION12_SYNAPSE27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse27 States
enum Connection12Synapse27States {
    CONNECTION12_SYNAPSE27_L,
};

// connection12_synapse27 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse27States state;
} Connection12Synapse27;

// connection12_synapse27 Initialisation function
void Connection12Synapse27Init(Connection12Synapse27* me);

// connection12_synapse27 Execution function
void Connection12Synapse27Run(Connection12Synapse27* me);

#endif // CONNECTION12_SYNAPSE27_H_