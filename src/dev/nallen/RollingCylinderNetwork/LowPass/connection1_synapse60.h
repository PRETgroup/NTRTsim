#ifndef CONNECTION1_SYNAPSE60_H_
#define CONNECTION1_SYNAPSE60_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse60 States
enum Connection1Synapse60States {
    CONNECTION1_SYNAPSE60_L,
};

// connection1_synapse60 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse60States state;
} Connection1Synapse60;

// connection1_synapse60 Initialisation function
void Connection1Synapse60Init(Connection1Synapse60* me);

// connection1_synapse60 Execution function
void Connection1Synapse60Run(Connection1Synapse60* me);

#endif // CONNECTION1_SYNAPSE60_H_