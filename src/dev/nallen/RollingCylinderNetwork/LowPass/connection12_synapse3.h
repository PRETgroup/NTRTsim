#ifndef CONNECTION12_SYNAPSE3_H_
#define CONNECTION12_SYNAPSE3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse3 States
enum Connection12Synapse3States {
    CONNECTION12_SYNAPSE3_L,
};

// connection12_synapse3 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse3States state;
} Connection12Synapse3;

// connection12_synapse3 Initialisation function
void Connection12Synapse3Init(Connection12Synapse3* me);

// connection12_synapse3 Execution function
void Connection12Synapse3Run(Connection12Synapse3* me);

#endif // CONNECTION12_SYNAPSE3_H_