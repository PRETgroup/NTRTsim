#ifndef CONNECTION12_SYNAPSE6_H_
#define CONNECTION12_SYNAPSE6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse6 States
enum Connection12Synapse6States {
    CONNECTION12_SYNAPSE6_L,
};

// connection12_synapse6 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse6States state;
} Connection12Synapse6;

// connection12_synapse6 Initialisation function
void Connection12Synapse6Init(Connection12Synapse6* me);

// connection12_synapse6 Execution function
void Connection12Synapse6Run(Connection12Synapse6* me);

#endif // CONNECTION12_SYNAPSE6_H_