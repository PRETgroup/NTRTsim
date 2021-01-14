#ifndef CONNECTION1_SYNAPSE94_H_
#define CONNECTION1_SYNAPSE94_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse94 States
enum Connection1Synapse94States {
    CONNECTION1_SYNAPSE94_L,
};

// connection1_synapse94 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse94States state;
} Connection1Synapse94;

// connection1_synapse94 Initialisation function
void Connection1Synapse94Init(Connection1Synapse94* me);

// connection1_synapse94 Execution function
void Connection1Synapse94Run(Connection1Synapse94* me);

#endif // CONNECTION1_SYNAPSE94_H_