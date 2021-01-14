#ifndef CONNECTION1_SYNAPSE10_H_
#define CONNECTION1_SYNAPSE10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse10 States
enum Connection1Synapse10States {
    CONNECTION1_SYNAPSE10_L,
};

// connection1_synapse10 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse10States state;
} Connection1Synapse10;

// connection1_synapse10 Initialisation function
void Connection1Synapse10Init(Connection1Synapse10* me);

// connection1_synapse10 Execution function
void Connection1Synapse10Run(Connection1Synapse10* me);

#endif // CONNECTION1_SYNAPSE10_H_