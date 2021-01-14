#ifndef CONNECTION1_SYNAPSE61_H_
#define CONNECTION1_SYNAPSE61_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse61 States
enum Connection1Synapse61States {
    CONNECTION1_SYNAPSE61_L,
};

// connection1_synapse61 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse61States state;
} Connection1Synapse61;

// connection1_synapse61 Initialisation function
void Connection1Synapse61Init(Connection1Synapse61* me);

// connection1_synapse61 Execution function
void Connection1Synapse61Run(Connection1Synapse61* me);

#endif // CONNECTION1_SYNAPSE61_H_