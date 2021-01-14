#ifndef CONNECTION12_SYNAPSE0_H_
#define CONNECTION12_SYNAPSE0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse0 States
enum Connection12Synapse0States {
    CONNECTION12_SYNAPSE0_L,
};

// connection12_synapse0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse0States state;
} Connection12Synapse0;

// connection12_synapse0 Initialisation function
void Connection12Synapse0Init(Connection12Synapse0* me);

// connection12_synapse0 Execution function
void Connection12Synapse0Run(Connection12Synapse0* me);

#endif // CONNECTION12_SYNAPSE0_H_