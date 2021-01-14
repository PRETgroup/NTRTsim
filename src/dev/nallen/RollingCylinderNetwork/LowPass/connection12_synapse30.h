#ifndef CONNECTION12_SYNAPSE30_H_
#define CONNECTION12_SYNAPSE30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse30 States
enum Connection12Synapse30States {
    CONNECTION12_SYNAPSE30_L,
};

// connection12_synapse30 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse30States state;
} Connection12Synapse30;

// connection12_synapse30 Initialisation function
void Connection12Synapse30Init(Connection12Synapse30* me);

// connection12_synapse30 Execution function
void Connection12Synapse30Run(Connection12Synapse30* me);

#endif // CONNECTION12_SYNAPSE30_H_