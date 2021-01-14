#ifndef CONNECTION12_SYNAPSE4_H_
#define CONNECTION12_SYNAPSE4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse4 States
enum Connection12Synapse4States {
    CONNECTION12_SYNAPSE4_L,
};

// connection12_synapse4 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse4States state;
} Connection12Synapse4;

// connection12_synapse4 Initialisation function
void Connection12Synapse4Init(Connection12Synapse4* me);

// connection12_synapse4 Execution function
void Connection12Synapse4Run(Connection12Synapse4* me);

#endif // CONNECTION12_SYNAPSE4_H_