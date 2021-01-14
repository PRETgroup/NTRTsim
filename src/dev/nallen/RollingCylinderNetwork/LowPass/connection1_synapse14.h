#ifndef CONNECTION1_SYNAPSE14_H_
#define CONNECTION1_SYNAPSE14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse14 States
enum Connection1Synapse14States {
    CONNECTION1_SYNAPSE14_L,
};

// connection1_synapse14 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse14States state;
} Connection1Synapse14;

// connection1_synapse14 Initialisation function
void Connection1Synapse14Init(Connection1Synapse14* me);

// connection1_synapse14 Execution function
void Connection1Synapse14Run(Connection1Synapse14* me);

#endif // CONNECTION1_SYNAPSE14_H_