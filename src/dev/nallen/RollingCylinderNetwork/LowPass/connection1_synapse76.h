#ifndef CONNECTION1_SYNAPSE76_H_
#define CONNECTION1_SYNAPSE76_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse76 States
enum Connection1Synapse76States {
    CONNECTION1_SYNAPSE76_L,
};

// connection1_synapse76 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse76States state;
} Connection1Synapse76;

// connection1_synapse76 Initialisation function
void Connection1Synapse76Init(Connection1Synapse76* me);

// connection1_synapse76 Execution function
void Connection1Synapse76Run(Connection1Synapse76* me);

#endif // CONNECTION1_SYNAPSE76_H_