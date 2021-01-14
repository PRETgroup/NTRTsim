#ifndef CONNECTION1_SYNAPSE15_H_
#define CONNECTION1_SYNAPSE15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse15 States
enum Connection1Synapse15States {
    CONNECTION1_SYNAPSE15_L,
};

// connection1_synapse15 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse15States state;
} Connection1Synapse15;

// connection1_synapse15 Initialisation function
void Connection1Synapse15Init(Connection1Synapse15* me);

// connection1_synapse15 Execution function
void Connection1Synapse15Run(Connection1Synapse15* me);

#endif // CONNECTION1_SYNAPSE15_H_