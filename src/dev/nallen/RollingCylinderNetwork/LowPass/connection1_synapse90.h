#ifndef CONNECTION1_SYNAPSE90_H_
#define CONNECTION1_SYNAPSE90_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse90 States
enum Connection1Synapse90States {
    CONNECTION1_SYNAPSE90_L,
};

// connection1_synapse90 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse90States state;
} Connection1Synapse90;

// connection1_synapse90 Initialisation function
void Connection1Synapse90Init(Connection1Synapse90* me);

// connection1_synapse90 Execution function
void Connection1Synapse90Run(Connection1Synapse90* me);

#endif // CONNECTION1_SYNAPSE90_H_