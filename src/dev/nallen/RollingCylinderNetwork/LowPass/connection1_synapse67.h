#ifndef CONNECTION1_SYNAPSE67_H_
#define CONNECTION1_SYNAPSE67_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse67 States
enum Connection1Synapse67States {
    CONNECTION1_SYNAPSE67_L,
};

// connection1_synapse67 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse67States state;
} Connection1Synapse67;

// connection1_synapse67 Initialisation function
void Connection1Synapse67Init(Connection1Synapse67* me);

// connection1_synapse67 Execution function
void Connection1Synapse67Run(Connection1Synapse67* me);

#endif // CONNECTION1_SYNAPSE67_H_