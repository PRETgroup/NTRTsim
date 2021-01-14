#ifndef CONNECTION1_SYNAPSE19_H_
#define CONNECTION1_SYNAPSE19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse19 States
enum Connection1Synapse19States {
    CONNECTION1_SYNAPSE19_L,
};

// connection1_synapse19 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse19States state;
} Connection1Synapse19;

// connection1_synapse19 Initialisation function
void Connection1Synapse19Init(Connection1Synapse19* me);

// connection1_synapse19 Execution function
void Connection1Synapse19Run(Connection1Synapse19* me);

#endif // CONNECTION1_SYNAPSE19_H_