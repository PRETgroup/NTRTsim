#ifndef CONNECTION1_SYNAPSE73_H_
#define CONNECTION1_SYNAPSE73_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse73 States
enum Connection1Synapse73States {
    CONNECTION1_SYNAPSE73_L,
};

// connection1_synapse73 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse73States state;
} Connection1Synapse73;

// connection1_synapse73 Initialisation function
void Connection1Synapse73Init(Connection1Synapse73* me);

// connection1_synapse73 Execution function
void Connection1Synapse73Run(Connection1Synapse73* me);

#endif // CONNECTION1_SYNAPSE73_H_