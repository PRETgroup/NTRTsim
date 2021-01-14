#ifndef CONNECTION1_SYNAPSE40_H_
#define CONNECTION1_SYNAPSE40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse40 States
enum Connection1Synapse40States {
    CONNECTION1_SYNAPSE40_L,
};

// connection1_synapse40 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse40States state;
} Connection1Synapse40;

// connection1_synapse40 Initialisation function
void Connection1Synapse40Init(Connection1Synapse40* me);

// connection1_synapse40 Execution function
void Connection1Synapse40Run(Connection1Synapse40* me);

#endif // CONNECTION1_SYNAPSE40_H_