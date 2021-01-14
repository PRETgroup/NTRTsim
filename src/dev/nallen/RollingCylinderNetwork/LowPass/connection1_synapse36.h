#ifndef CONNECTION1_SYNAPSE36_H_
#define CONNECTION1_SYNAPSE36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse36 States
enum Connection1Synapse36States {
    CONNECTION1_SYNAPSE36_L,
};

// connection1_synapse36 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse36States state;
} Connection1Synapse36;

// connection1_synapse36 Initialisation function
void Connection1Synapse36Init(Connection1Synapse36* me);

// connection1_synapse36 Execution function
void Connection1Synapse36Run(Connection1Synapse36* me);

#endif // CONNECTION1_SYNAPSE36_H_