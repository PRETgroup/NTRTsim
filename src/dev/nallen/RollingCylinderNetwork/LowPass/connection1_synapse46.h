#ifndef CONNECTION1_SYNAPSE46_H_
#define CONNECTION1_SYNAPSE46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse46 States
enum Connection1Synapse46States {
    CONNECTION1_SYNAPSE46_L,
};

// connection1_synapse46 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse46States state;
} Connection1Synapse46;

// connection1_synapse46 Initialisation function
void Connection1Synapse46Init(Connection1Synapse46* me);

// connection1_synapse46 Execution function
void Connection1Synapse46Run(Connection1Synapse46* me);

#endif // CONNECTION1_SYNAPSE46_H_