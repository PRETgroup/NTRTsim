#ifndef CONNECTION1_SYNAPSE22_H_
#define CONNECTION1_SYNAPSE22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse22 States
enum Connection1Synapse22States {
    CONNECTION1_SYNAPSE22_L,
};

// connection1_synapse22 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse22States state;
} Connection1Synapse22;

// connection1_synapse22 Initialisation function
void Connection1Synapse22Init(Connection1Synapse22* me);

// connection1_synapse22 Execution function
void Connection1Synapse22Run(Connection1Synapse22* me);

#endif // CONNECTION1_SYNAPSE22_H_