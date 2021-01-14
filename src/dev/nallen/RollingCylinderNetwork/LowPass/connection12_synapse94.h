#ifndef CONNECTION12_SYNAPSE94_H_
#define CONNECTION12_SYNAPSE94_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse94 States
enum Connection12Synapse94States {
    CONNECTION12_SYNAPSE94_L,
};

// connection12_synapse94 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse94States state;
} Connection12Synapse94;

// connection12_synapse94 Initialisation function
void Connection12Synapse94Init(Connection12Synapse94* me);

// connection12_synapse94 Execution function
void Connection12Synapse94Run(Connection12Synapse94* me);

#endif // CONNECTION12_SYNAPSE94_H_