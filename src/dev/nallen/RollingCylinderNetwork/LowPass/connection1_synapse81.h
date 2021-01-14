#ifndef CONNECTION1_SYNAPSE81_H_
#define CONNECTION1_SYNAPSE81_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse81 States
enum Connection1Synapse81States {
    CONNECTION1_SYNAPSE81_L,
};

// connection1_synapse81 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse81States state;
} Connection1Synapse81;

// connection1_synapse81 Initialisation function
void Connection1Synapse81Init(Connection1Synapse81* me);

// connection1_synapse81 Execution function
void Connection1Synapse81Run(Connection1Synapse81* me);

#endif // CONNECTION1_SYNAPSE81_H_