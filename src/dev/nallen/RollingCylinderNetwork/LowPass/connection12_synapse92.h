#ifndef CONNECTION12_SYNAPSE92_H_
#define CONNECTION12_SYNAPSE92_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse92 States
enum Connection12Synapse92States {
    CONNECTION12_SYNAPSE92_L,
};

// connection12_synapse92 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse92States state;
} Connection12Synapse92;

// connection12_synapse92 Initialisation function
void Connection12Synapse92Init(Connection12Synapse92* me);

// connection12_synapse92 Execution function
void Connection12Synapse92Run(Connection12Synapse92* me);

#endif // CONNECTION12_SYNAPSE92_H_