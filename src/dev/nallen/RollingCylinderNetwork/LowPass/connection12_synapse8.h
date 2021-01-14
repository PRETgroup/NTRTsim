#ifndef CONNECTION12_SYNAPSE8_H_
#define CONNECTION12_SYNAPSE8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse8 States
enum Connection12Synapse8States {
    CONNECTION12_SYNAPSE8_L,
};

// connection12_synapse8 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse8States state;
} Connection12Synapse8;

// connection12_synapse8 Initialisation function
void Connection12Synapse8Init(Connection12Synapse8* me);

// connection12_synapse8 Execution function
void Connection12Synapse8Run(Connection12Synapse8* me);

#endif // CONNECTION12_SYNAPSE8_H_