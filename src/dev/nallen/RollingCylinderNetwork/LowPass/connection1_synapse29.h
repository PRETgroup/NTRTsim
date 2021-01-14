#ifndef CONNECTION1_SYNAPSE29_H_
#define CONNECTION1_SYNAPSE29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse29 States
enum Connection1Synapse29States {
    CONNECTION1_SYNAPSE29_L,
};

// connection1_synapse29 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse29States state;
} Connection1Synapse29;

// connection1_synapse29 Initialisation function
void Connection1Synapse29Init(Connection1Synapse29* me);

// connection1_synapse29 Execution function
void Connection1Synapse29Run(Connection1Synapse29* me);

#endif // CONNECTION1_SYNAPSE29_H_