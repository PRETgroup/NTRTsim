#ifndef CONNECTION12_SYNAPSE64_H_
#define CONNECTION12_SYNAPSE64_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse64 States
enum Connection12Synapse64States {
    CONNECTION12_SYNAPSE64_L,
};

// connection12_synapse64 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse64States state;
} Connection12Synapse64;

// connection12_synapse64 Initialisation function
void Connection12Synapse64Init(Connection12Synapse64* me);

// connection12_synapse64 Execution function
void Connection12Synapse64Run(Connection12Synapse64* me);

#endif // CONNECTION12_SYNAPSE64_H_