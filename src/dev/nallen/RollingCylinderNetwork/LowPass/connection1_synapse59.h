#ifndef CONNECTION1_SYNAPSE59_H_
#define CONNECTION1_SYNAPSE59_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse59 States
enum Connection1Synapse59States {
    CONNECTION1_SYNAPSE59_L,
};

// connection1_synapse59 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse59States state;
} Connection1Synapse59;

// connection1_synapse59 Initialisation function
void Connection1Synapse59Init(Connection1Synapse59* me);

// connection1_synapse59 Execution function
void Connection1Synapse59Run(Connection1Synapse59* me);

#endif // CONNECTION1_SYNAPSE59_H_