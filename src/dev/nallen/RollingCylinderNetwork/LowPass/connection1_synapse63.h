#ifndef CONNECTION1_SYNAPSE63_H_
#define CONNECTION1_SYNAPSE63_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse63 States
enum Connection1Synapse63States {
    CONNECTION1_SYNAPSE63_L,
};

// connection1_synapse63 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse63States state;
} Connection1Synapse63;

// connection1_synapse63 Initialisation function
void Connection1Synapse63Init(Connection1Synapse63* me);

// connection1_synapse63 Execution function
void Connection1Synapse63Run(Connection1Synapse63* me);

#endif // CONNECTION1_SYNAPSE63_H_