#ifndef CONNECTION1_SYNAPSE52_H_
#define CONNECTION1_SYNAPSE52_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse52 States
enum Connection1Synapse52States {
    CONNECTION1_SYNAPSE52_L,
};

// connection1_synapse52 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse52States state;
} Connection1Synapse52;

// connection1_synapse52 Initialisation function
void Connection1Synapse52Init(Connection1Synapse52* me);

// connection1_synapse52 Execution function
void Connection1Synapse52Run(Connection1Synapse52* me);

#endif // CONNECTION1_SYNAPSE52_H_