#ifndef CONNECTION12_SYNAPSE76_H_
#define CONNECTION12_SYNAPSE76_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse76 States
enum Connection12Synapse76States {
    CONNECTION12_SYNAPSE76_L,
};

// connection12_synapse76 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse76States state;
} Connection12Synapse76;

// connection12_synapse76 Initialisation function
void Connection12Synapse76Init(Connection12Synapse76* me);

// connection12_synapse76 Execution function
void Connection12Synapse76Run(Connection12Synapse76* me);

#endif // CONNECTION12_SYNAPSE76_H_