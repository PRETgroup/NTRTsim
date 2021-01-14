#ifndef CONNECTION12_SYNAPSE40_H_
#define CONNECTION12_SYNAPSE40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse40 States
enum Connection12Synapse40States {
    CONNECTION12_SYNAPSE40_L,
};

// connection12_synapse40 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse40States state;
} Connection12Synapse40;

// connection12_synapse40 Initialisation function
void Connection12Synapse40Init(Connection12Synapse40* me);

// connection12_synapse40 Execution function
void Connection12Synapse40Run(Connection12Synapse40* me);

#endif // CONNECTION12_SYNAPSE40_H_