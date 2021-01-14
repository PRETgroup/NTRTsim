#ifndef CONNECTION1_SYNAPSE27_H_
#define CONNECTION1_SYNAPSE27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse27 States
enum Connection1Synapse27States {
    CONNECTION1_SYNAPSE27_L,
};

// connection1_synapse27 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse27States state;
} Connection1Synapse27;

// connection1_synapse27 Initialisation function
void Connection1Synapse27Init(Connection1Synapse27* me);

// connection1_synapse27 Execution function
void Connection1Synapse27Run(Connection1Synapse27* me);

#endif // CONNECTION1_SYNAPSE27_H_