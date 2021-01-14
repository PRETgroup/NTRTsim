#ifndef CONNECTION12_SYNAPSE80_H_
#define CONNECTION12_SYNAPSE80_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse80 States
enum Connection12Synapse80States {
    CONNECTION12_SYNAPSE80_L,
};

// connection12_synapse80 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse80States state;
} Connection12Synapse80;

// connection12_synapse80 Initialisation function
void Connection12Synapse80Init(Connection12Synapse80* me);

// connection12_synapse80 Execution function
void Connection12Synapse80Run(Connection12Synapse80* me);

#endif // CONNECTION12_SYNAPSE80_H_