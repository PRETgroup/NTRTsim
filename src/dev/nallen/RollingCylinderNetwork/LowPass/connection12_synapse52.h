#ifndef CONNECTION12_SYNAPSE52_H_
#define CONNECTION12_SYNAPSE52_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse52 States
enum Connection12Synapse52States {
    CONNECTION12_SYNAPSE52_L,
};

// connection12_synapse52 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse52States state;
} Connection12Synapse52;

// connection12_synapse52 Initialisation function
void Connection12Synapse52Init(Connection12Synapse52* me);

// connection12_synapse52 Execution function
void Connection12Synapse52Run(Connection12Synapse52* me);

#endif // CONNECTION12_SYNAPSE52_H_