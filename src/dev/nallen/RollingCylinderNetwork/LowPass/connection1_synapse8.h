#ifndef CONNECTION1_SYNAPSE8_H_
#define CONNECTION1_SYNAPSE8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse8 States
enum Connection1Synapse8States {
    CONNECTION1_SYNAPSE8_L,
};

// connection1_synapse8 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse8States state;
} Connection1Synapse8;

// connection1_synapse8 Initialisation function
void Connection1Synapse8Init(Connection1Synapse8* me);

// connection1_synapse8 Execution function
void Connection1Synapse8Run(Connection1Synapse8* me);

#endif // CONNECTION1_SYNAPSE8_H_