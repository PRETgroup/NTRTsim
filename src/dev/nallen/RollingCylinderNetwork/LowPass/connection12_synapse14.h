#ifndef CONNECTION12_SYNAPSE14_H_
#define CONNECTION12_SYNAPSE14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse14 States
enum Connection12Synapse14States {
    CONNECTION12_SYNAPSE14_L,
};

// connection12_synapse14 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse14States state;
} Connection12Synapse14;

// connection12_synapse14 Initialisation function
void Connection12Synapse14Init(Connection12Synapse14* me);

// connection12_synapse14 Execution function
void Connection12Synapse14Run(Connection12Synapse14* me);

#endif // CONNECTION12_SYNAPSE14_H_