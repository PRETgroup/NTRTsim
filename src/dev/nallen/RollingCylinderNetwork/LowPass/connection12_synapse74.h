#ifndef CONNECTION12_SYNAPSE74_H_
#define CONNECTION12_SYNAPSE74_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse74 States
enum Connection12Synapse74States {
    CONNECTION12_SYNAPSE74_L,
};

// connection12_synapse74 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse74States state;
} Connection12Synapse74;

// connection12_synapse74 Initialisation function
void Connection12Synapse74Init(Connection12Synapse74* me);

// connection12_synapse74 Execution function
void Connection12Synapse74Run(Connection12Synapse74* me);

#endif // CONNECTION12_SYNAPSE74_H_