#ifndef CONNECTION12_SYNAPSE2_H_
#define CONNECTION12_SYNAPSE2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse2 States
enum Connection12Synapse2States {
    CONNECTION12_SYNAPSE2_L,
};

// connection12_synapse2 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse2States state;
} Connection12Synapse2;

// connection12_synapse2 Initialisation function
void Connection12Synapse2Init(Connection12Synapse2* me);

// connection12_synapse2 Execution function
void Connection12Synapse2Run(Connection12Synapse2* me);

#endif // CONNECTION12_SYNAPSE2_H_