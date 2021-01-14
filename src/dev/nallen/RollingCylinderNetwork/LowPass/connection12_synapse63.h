#ifndef CONNECTION12_SYNAPSE63_H_
#define CONNECTION12_SYNAPSE63_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse63 States
enum Connection12Synapse63States {
    CONNECTION12_SYNAPSE63_L,
};

// connection12_synapse63 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse63States state;
} Connection12Synapse63;

// connection12_synapse63 Initialisation function
void Connection12Synapse63Init(Connection12Synapse63* me);

// connection12_synapse63 Execution function
void Connection12Synapse63Run(Connection12Synapse63* me);

#endif // CONNECTION12_SYNAPSE63_H_