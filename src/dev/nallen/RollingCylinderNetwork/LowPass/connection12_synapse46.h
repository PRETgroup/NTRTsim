#ifndef CONNECTION12_SYNAPSE46_H_
#define CONNECTION12_SYNAPSE46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse46 States
enum Connection12Synapse46States {
    CONNECTION12_SYNAPSE46_L,
};

// connection12_synapse46 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse46States state;
} Connection12Synapse46;

// connection12_synapse46 Initialisation function
void Connection12Synapse46Init(Connection12Synapse46* me);

// connection12_synapse46 Execution function
void Connection12Synapse46Run(Connection12Synapse46* me);

#endif // CONNECTION12_SYNAPSE46_H_