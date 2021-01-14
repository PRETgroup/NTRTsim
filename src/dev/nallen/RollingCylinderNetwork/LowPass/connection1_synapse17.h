#ifndef CONNECTION1_SYNAPSE17_H_
#define CONNECTION1_SYNAPSE17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse17 States
enum Connection1Synapse17States {
    CONNECTION1_SYNAPSE17_L,
};

// connection1_synapse17 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse17States state;
} Connection1Synapse17;

// connection1_synapse17 Initialisation function
void Connection1Synapse17Init(Connection1Synapse17* me);

// connection1_synapse17 Execution function
void Connection1Synapse17Run(Connection1Synapse17* me);

#endif // CONNECTION1_SYNAPSE17_H_