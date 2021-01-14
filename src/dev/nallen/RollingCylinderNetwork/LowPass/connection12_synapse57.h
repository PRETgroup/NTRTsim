#ifndef CONNECTION12_SYNAPSE57_H_
#define CONNECTION12_SYNAPSE57_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse57 States
enum Connection12Synapse57States {
    CONNECTION12_SYNAPSE57_L,
};

// connection12_synapse57 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse57States state;
} Connection12Synapse57;

// connection12_synapse57 Initialisation function
void Connection12Synapse57Init(Connection12Synapse57* me);

// connection12_synapse57 Execution function
void Connection12Synapse57Run(Connection12Synapse57* me);

#endif // CONNECTION12_SYNAPSE57_H_