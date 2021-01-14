#ifndef CONNECTION12_SYNAPSE62_H_
#define CONNECTION12_SYNAPSE62_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse62 States
enum Connection12Synapse62States {
    CONNECTION12_SYNAPSE62_L,
};

// connection12_synapse62 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse62States state;
} Connection12Synapse62;

// connection12_synapse62 Initialisation function
void Connection12Synapse62Init(Connection12Synapse62* me);

// connection12_synapse62 Execution function
void Connection12Synapse62Run(Connection12Synapse62* me);

#endif // CONNECTION12_SYNAPSE62_H_