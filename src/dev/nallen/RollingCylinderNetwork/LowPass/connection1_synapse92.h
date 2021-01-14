#ifndef CONNECTION1_SYNAPSE92_H_
#define CONNECTION1_SYNAPSE92_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse92 States
enum Connection1Synapse92States {
    CONNECTION1_SYNAPSE92_L,
};

// connection1_synapse92 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse92States state;
} Connection1Synapse92;

// connection1_synapse92 Initialisation function
void Connection1Synapse92Init(Connection1Synapse92* me);

// connection1_synapse92 Execution function
void Connection1Synapse92Run(Connection1Synapse92* me);

#endif // CONNECTION1_SYNAPSE92_H_