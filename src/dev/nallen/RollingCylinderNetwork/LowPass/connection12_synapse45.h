#ifndef CONNECTION12_SYNAPSE45_H_
#define CONNECTION12_SYNAPSE45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse45 States
enum Connection12Synapse45States {
    CONNECTION12_SYNAPSE45_L,
};

// connection12_synapse45 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse45States state;
} Connection12Synapse45;

// connection12_synapse45 Initialisation function
void Connection12Synapse45Init(Connection12Synapse45* me);

// connection12_synapse45 Execution function
void Connection12Synapse45Run(Connection12Synapse45* me);

#endif // CONNECTION12_SYNAPSE45_H_