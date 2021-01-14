#ifndef CONNECTION12_SYNAPSE79_H_
#define CONNECTION12_SYNAPSE79_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse79 States
enum Connection12Synapse79States {
    CONNECTION12_SYNAPSE79_L,
};

// connection12_synapse79 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse79States state;
} Connection12Synapse79;

// connection12_synapse79 Initialisation function
void Connection12Synapse79Init(Connection12Synapse79* me);

// connection12_synapse79 Execution function
void Connection12Synapse79Run(Connection12Synapse79* me);

#endif // CONNECTION12_SYNAPSE79_H_