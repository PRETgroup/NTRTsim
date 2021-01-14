#ifndef CONNECTION1_SYNAPSE6_H_
#define CONNECTION1_SYNAPSE6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse6 States
enum Connection1Synapse6States {
    CONNECTION1_SYNAPSE6_L,
};

// connection1_synapse6 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse6States state;
} Connection1Synapse6;

// connection1_synapse6 Initialisation function
void Connection1Synapse6Init(Connection1Synapse6* me);

// connection1_synapse6 Execution function
void Connection1Synapse6Run(Connection1Synapse6* me);

#endif // CONNECTION1_SYNAPSE6_H_