#ifndef CONNECTION12_SYNAPSE22_H_
#define CONNECTION12_SYNAPSE22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse22 States
enum Connection12Synapse22States {
    CONNECTION12_SYNAPSE22_L,
};

// connection12_synapse22 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse22States state;
} Connection12Synapse22;

// connection12_synapse22 Initialisation function
void Connection12Synapse22Init(Connection12Synapse22* me);

// connection12_synapse22 Execution function
void Connection12Synapse22Run(Connection12Synapse22* me);

#endif // CONNECTION12_SYNAPSE22_H_