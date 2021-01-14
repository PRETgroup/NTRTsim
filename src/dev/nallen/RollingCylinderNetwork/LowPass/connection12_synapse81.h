#ifndef CONNECTION12_SYNAPSE81_H_
#define CONNECTION12_SYNAPSE81_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse81 States
enum Connection12Synapse81States {
    CONNECTION12_SYNAPSE81_L,
};

// connection12_synapse81 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse81States state;
} Connection12Synapse81;

// connection12_synapse81 Initialisation function
void Connection12Synapse81Init(Connection12Synapse81* me);

// connection12_synapse81 Execution function
void Connection12Synapse81Run(Connection12Synapse81* me);

#endif // CONNECTION12_SYNAPSE81_H_