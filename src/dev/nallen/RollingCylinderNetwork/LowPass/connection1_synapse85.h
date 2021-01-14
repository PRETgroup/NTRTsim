#ifndef CONNECTION1_SYNAPSE85_H_
#define CONNECTION1_SYNAPSE85_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse85 States
enum Connection1Synapse85States {
    CONNECTION1_SYNAPSE85_L,
};

// connection1_synapse85 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse85States state;
} Connection1Synapse85;

// connection1_synapse85 Initialisation function
void Connection1Synapse85Init(Connection1Synapse85* me);

// connection1_synapse85 Execution function
void Connection1Synapse85Run(Connection1Synapse85* me);

#endif // CONNECTION1_SYNAPSE85_H_