#ifndef CONNECTION1_SYNAPSE45_H_
#define CONNECTION1_SYNAPSE45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse45 States
enum Connection1Synapse45States {
    CONNECTION1_SYNAPSE45_L,
};

// connection1_synapse45 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse45States state;
} Connection1Synapse45;

// connection1_synapse45 Initialisation function
void Connection1Synapse45Init(Connection1Synapse45* me);

// connection1_synapse45 Execution function
void Connection1Synapse45Run(Connection1Synapse45* me);

#endif // CONNECTION1_SYNAPSE45_H_