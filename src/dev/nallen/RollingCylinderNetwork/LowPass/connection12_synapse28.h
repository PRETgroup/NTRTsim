#ifndef CONNECTION12_SYNAPSE28_H_
#define CONNECTION12_SYNAPSE28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse28 States
enum Connection12Synapse28States {
    CONNECTION12_SYNAPSE28_L,
};

// connection12_synapse28 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse28States state;
} Connection12Synapse28;

// connection12_synapse28 Initialisation function
void Connection12Synapse28Init(Connection12Synapse28* me);

// connection12_synapse28 Execution function
void Connection12Synapse28Run(Connection12Synapse28* me);

#endif // CONNECTION12_SYNAPSE28_H_