#ifndef CONNECTION1_SYNAPSE42_H_
#define CONNECTION1_SYNAPSE42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse42 States
enum Connection1Synapse42States {
    CONNECTION1_SYNAPSE42_L,
};

// connection1_synapse42 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse42States state;
} Connection1Synapse42;

// connection1_synapse42 Initialisation function
void Connection1Synapse42Init(Connection1Synapse42* me);

// connection1_synapse42 Execution function
void Connection1Synapse42Run(Connection1Synapse42* me);

#endif // CONNECTION1_SYNAPSE42_H_