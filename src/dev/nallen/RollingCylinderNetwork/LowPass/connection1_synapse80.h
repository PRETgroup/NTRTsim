#ifndef CONNECTION1_SYNAPSE80_H_
#define CONNECTION1_SYNAPSE80_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse80 States
enum Connection1Synapse80States {
    CONNECTION1_SYNAPSE80_L,
};

// connection1_synapse80 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse80States state;
} Connection1Synapse80;

// connection1_synapse80 Initialisation function
void Connection1Synapse80Init(Connection1Synapse80* me);

// connection1_synapse80 Execution function
void Connection1Synapse80Run(Connection1Synapse80* me);

#endif // CONNECTION1_SYNAPSE80_H_