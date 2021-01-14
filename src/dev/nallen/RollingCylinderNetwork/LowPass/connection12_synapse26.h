#ifndef CONNECTION12_SYNAPSE26_H_
#define CONNECTION12_SYNAPSE26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse26 States
enum Connection12Synapse26States {
    CONNECTION12_SYNAPSE26_L,
};

// connection12_synapse26 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse26States state;
} Connection12Synapse26;

// connection12_synapse26 Initialisation function
void Connection12Synapse26Init(Connection12Synapse26* me);

// connection12_synapse26 Execution function
void Connection12Synapse26Run(Connection12Synapse26* me);

#endif // CONNECTION12_SYNAPSE26_H_