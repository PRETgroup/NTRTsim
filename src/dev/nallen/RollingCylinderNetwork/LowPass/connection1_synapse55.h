#ifndef CONNECTION1_SYNAPSE55_H_
#define CONNECTION1_SYNAPSE55_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse55 States
enum Connection1Synapse55States {
    CONNECTION1_SYNAPSE55_L,
};

// connection1_synapse55 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse55States state;
} Connection1Synapse55;

// connection1_synapse55 Initialisation function
void Connection1Synapse55Init(Connection1Synapse55* me);

// connection1_synapse55 Execution function
void Connection1Synapse55Run(Connection1Synapse55* me);

#endif // CONNECTION1_SYNAPSE55_H_