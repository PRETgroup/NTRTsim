#ifndef CONNECTION1_SYNAPSE57_H_
#define CONNECTION1_SYNAPSE57_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse57 States
enum Connection1Synapse57States {
    CONNECTION1_SYNAPSE57_L,
};

// connection1_synapse57 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse57States state;
} Connection1Synapse57;

// connection1_synapse57 Initialisation function
void Connection1Synapse57Init(Connection1Synapse57* me);

// connection1_synapse57 Execution function
void Connection1Synapse57Run(Connection1Synapse57* me);

#endif // CONNECTION1_SYNAPSE57_H_