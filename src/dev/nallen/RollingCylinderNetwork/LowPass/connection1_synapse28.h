#ifndef CONNECTION1_SYNAPSE28_H_
#define CONNECTION1_SYNAPSE28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse28 States
enum Connection1Synapse28States {
    CONNECTION1_SYNAPSE28_L,
};

// connection1_synapse28 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse28States state;
} Connection1Synapse28;

// connection1_synapse28 Initialisation function
void Connection1Synapse28Init(Connection1Synapse28* me);

// connection1_synapse28 Execution function
void Connection1Synapse28Run(Connection1Synapse28* me);

#endif // CONNECTION1_SYNAPSE28_H_