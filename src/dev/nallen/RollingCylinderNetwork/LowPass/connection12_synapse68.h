#ifndef CONNECTION12_SYNAPSE68_H_
#define CONNECTION12_SYNAPSE68_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse68 States
enum Connection12Synapse68States {
    CONNECTION12_SYNAPSE68_L,
};

// connection12_synapse68 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse68States state;
} Connection12Synapse68;

// connection12_synapse68 Initialisation function
void Connection12Synapse68Init(Connection12Synapse68* me);

// connection12_synapse68 Execution function
void Connection12Synapse68Run(Connection12Synapse68* me);

#endif // CONNECTION12_SYNAPSE68_H_