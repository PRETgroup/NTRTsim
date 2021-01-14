#ifndef CONNECTION1_SYNAPSE2_H_
#define CONNECTION1_SYNAPSE2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse2 States
enum Connection1Synapse2States {
    CONNECTION1_SYNAPSE2_L,
};

// connection1_synapse2 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse2States state;
} Connection1Synapse2;

// connection1_synapse2 Initialisation function
void Connection1Synapse2Init(Connection1Synapse2* me);

// connection1_synapse2 Execution function
void Connection1Synapse2Run(Connection1Synapse2* me);

#endif // CONNECTION1_SYNAPSE2_H_