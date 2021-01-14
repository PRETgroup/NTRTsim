#ifndef CONNECTION12_SYNAPSE61_H_
#define CONNECTION12_SYNAPSE61_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse61 States
enum Connection12Synapse61States {
    CONNECTION12_SYNAPSE61_L,
};

// connection12_synapse61 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse61States state;
} Connection12Synapse61;

// connection12_synapse61 Initialisation function
void Connection12Synapse61Init(Connection12Synapse61* me);

// connection12_synapse61 Execution function
void Connection12Synapse61Run(Connection12Synapse61* me);

#endif // CONNECTION12_SYNAPSE61_H_