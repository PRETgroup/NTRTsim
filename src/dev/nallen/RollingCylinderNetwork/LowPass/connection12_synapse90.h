#ifndef CONNECTION12_SYNAPSE90_H_
#define CONNECTION12_SYNAPSE90_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse90 States
enum Connection12Synapse90States {
    CONNECTION12_SYNAPSE90_L,
};

// connection12_synapse90 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse90States state;
} Connection12Synapse90;

// connection12_synapse90 Initialisation function
void Connection12Synapse90Init(Connection12Synapse90* me);

// connection12_synapse90 Execution function
void Connection12Synapse90Run(Connection12Synapse90* me);

#endif // CONNECTION12_SYNAPSE90_H_