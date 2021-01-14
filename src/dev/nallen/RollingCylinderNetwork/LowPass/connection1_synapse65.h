#ifndef CONNECTION1_SYNAPSE65_H_
#define CONNECTION1_SYNAPSE65_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse65 States
enum Connection1Synapse65States {
    CONNECTION1_SYNAPSE65_L,
};

// connection1_synapse65 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse65States state;
} Connection1Synapse65;

// connection1_synapse65 Initialisation function
void Connection1Synapse65Init(Connection1Synapse65* me);

// connection1_synapse65 Execution function
void Connection1Synapse65Run(Connection1Synapse65* me);

#endif // CONNECTION1_SYNAPSE65_H_