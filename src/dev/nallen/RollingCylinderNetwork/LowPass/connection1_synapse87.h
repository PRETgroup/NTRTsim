#ifndef CONNECTION1_SYNAPSE87_H_
#define CONNECTION1_SYNAPSE87_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse87 States
enum Connection1Synapse87States {
    CONNECTION1_SYNAPSE87_L,
};

// connection1_synapse87 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse87States state;
} Connection1Synapse87;

// connection1_synapse87 Initialisation function
void Connection1Synapse87Init(Connection1Synapse87* me);

// connection1_synapse87 Execution function
void Connection1Synapse87Run(Connection1Synapse87* me);

#endif // CONNECTION1_SYNAPSE87_H_