#ifndef CONNECTION1_SYNAPSE75_H_
#define CONNECTION1_SYNAPSE75_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse75 States
enum Connection1Synapse75States {
    CONNECTION1_SYNAPSE75_L,
};

// connection1_synapse75 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse75States state;
} Connection1Synapse75;

// connection1_synapse75 Initialisation function
void Connection1Synapse75Init(Connection1Synapse75* me);

// connection1_synapse75 Execution function
void Connection1Synapse75Run(Connection1Synapse75* me);

#endif // CONNECTION1_SYNAPSE75_H_