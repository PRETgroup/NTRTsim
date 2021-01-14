#ifndef CONNECTION1_SYNAPSE77_H_
#define CONNECTION1_SYNAPSE77_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse77 States
enum Connection1Synapse77States {
    CONNECTION1_SYNAPSE77_L,
};

// connection1_synapse77 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse77States state;
} Connection1Synapse77;

// connection1_synapse77 Initialisation function
void Connection1Synapse77Init(Connection1Synapse77* me);

// connection1_synapse77 Execution function
void Connection1Synapse77Run(Connection1Synapse77* me);

#endif // CONNECTION1_SYNAPSE77_H_