#ifndef CONNECTION1_SYNAPSE3_H_
#define CONNECTION1_SYNAPSE3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse3 States
enum Connection1Synapse3States {
    CONNECTION1_SYNAPSE3_L,
};

// connection1_synapse3 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse3States state;
} Connection1Synapse3;

// connection1_synapse3 Initialisation function
void Connection1Synapse3Init(Connection1Synapse3* me);

// connection1_synapse3 Execution function
void Connection1Synapse3Run(Connection1Synapse3* me);

#endif // CONNECTION1_SYNAPSE3_H_