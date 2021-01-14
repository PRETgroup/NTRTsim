#ifndef CONNECTION1_SYNAPSE95_H_
#define CONNECTION1_SYNAPSE95_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse95 States
enum Connection1Synapse95States {
    CONNECTION1_SYNAPSE95_L,
};

// connection1_synapse95 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse95States state;
} Connection1Synapse95;

// connection1_synapse95 Initialisation function
void Connection1Synapse95Init(Connection1Synapse95* me);

// connection1_synapse95 Execution function
void Connection1Synapse95Run(Connection1Synapse95* me);

#endif // CONNECTION1_SYNAPSE95_H_