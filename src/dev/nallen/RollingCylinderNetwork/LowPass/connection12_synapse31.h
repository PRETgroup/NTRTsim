#ifndef CONNECTION12_SYNAPSE31_H_
#define CONNECTION12_SYNAPSE31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse31 States
enum Connection12Synapse31States {
    CONNECTION12_SYNAPSE31_L,
};

// connection12_synapse31 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse31States state;
} Connection12Synapse31;

// connection12_synapse31 Initialisation function
void Connection12Synapse31Init(Connection12Synapse31* me);

// connection12_synapse31 Execution function
void Connection12Synapse31Run(Connection12Synapse31* me);

#endif // CONNECTION12_SYNAPSE31_H_