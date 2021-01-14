#ifndef CONNECTION1_SYNAPSE0_H_
#define CONNECTION1_SYNAPSE0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse0 States
enum Connection1Synapse0States {
    CONNECTION1_SYNAPSE0_L,
};

// connection1_synapse0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse0States state;
} Connection1Synapse0;

// connection1_synapse0 Initialisation function
void Connection1Synapse0Init(Connection1Synapse0* me);

// connection1_synapse0 Execution function
void Connection1Synapse0Run(Connection1Synapse0* me);

#endif // CONNECTION1_SYNAPSE0_H_