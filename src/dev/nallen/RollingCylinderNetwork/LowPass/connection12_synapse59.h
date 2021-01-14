#ifndef CONNECTION12_SYNAPSE59_H_
#define CONNECTION12_SYNAPSE59_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse59 States
enum Connection12Synapse59States {
    CONNECTION12_SYNAPSE59_L,
};

// connection12_synapse59 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse59States state;
} Connection12Synapse59;

// connection12_synapse59 Initialisation function
void Connection12Synapse59Init(Connection12Synapse59* me);

// connection12_synapse59 Execution function
void Connection12Synapse59Run(Connection12Synapse59* me);

#endif // CONNECTION12_SYNAPSE59_H_