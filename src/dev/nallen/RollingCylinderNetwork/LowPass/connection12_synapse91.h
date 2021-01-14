#ifndef CONNECTION12_SYNAPSE91_H_
#define CONNECTION12_SYNAPSE91_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse91 States
enum Connection12Synapse91States {
    CONNECTION12_SYNAPSE91_L,
};

// connection12_synapse91 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse91States state;
} Connection12Synapse91;

// connection12_synapse91 Initialisation function
void Connection12Synapse91Init(Connection12Synapse91* me);

// connection12_synapse91 Execution function
void Connection12Synapse91Run(Connection12Synapse91* me);

#endif // CONNECTION12_SYNAPSE91_H_