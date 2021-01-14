#ifndef CONNECTION1_SYNAPSE97_H_
#define CONNECTION1_SYNAPSE97_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse97 States
enum Connection1Synapse97States {
    CONNECTION1_SYNAPSE97_L,
};

// connection1_synapse97 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse97States state;
} Connection1Synapse97;

// connection1_synapse97 Initialisation function
void Connection1Synapse97Init(Connection1Synapse97* me);

// connection1_synapse97 Execution function
void Connection1Synapse97Run(Connection1Synapse97* me);

#endif // CONNECTION1_SYNAPSE97_H_