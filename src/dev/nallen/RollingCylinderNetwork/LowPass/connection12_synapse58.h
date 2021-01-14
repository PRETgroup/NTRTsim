#ifndef CONNECTION12_SYNAPSE58_H_
#define CONNECTION12_SYNAPSE58_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse58 States
enum Connection12Synapse58States {
    CONNECTION12_SYNAPSE58_L,
};

// connection12_synapse58 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse58States state;
} Connection12Synapse58;

// connection12_synapse58 Initialisation function
void Connection12Synapse58Init(Connection12Synapse58* me);

// connection12_synapse58 Execution function
void Connection12Synapse58Run(Connection12Synapse58* me);

#endif // CONNECTION12_SYNAPSE58_H_