#ifndef CONNECTION1_SYNAPSE58_H_
#define CONNECTION1_SYNAPSE58_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse58 States
enum Connection1Synapse58States {
    CONNECTION1_SYNAPSE58_L,
};

// connection1_synapse58 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse58States state;
} Connection1Synapse58;

// connection1_synapse58 Initialisation function
void Connection1Synapse58Init(Connection1Synapse58* me);

// connection1_synapse58 Execution function
void Connection1Synapse58Run(Connection1Synapse58* me);

#endif // CONNECTION1_SYNAPSE58_H_