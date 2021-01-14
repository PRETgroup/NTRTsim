#ifndef CONNECTION1_SYNAPSE4_H_
#define CONNECTION1_SYNAPSE4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse4 States
enum Connection1Synapse4States {
    CONNECTION1_SYNAPSE4_L,
};

// connection1_synapse4 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse4States state;
} Connection1Synapse4;

// connection1_synapse4 Initialisation function
void Connection1Synapse4Init(Connection1Synapse4* me);

// connection1_synapse4 Execution function
void Connection1Synapse4Run(Connection1Synapse4* me);

#endif // CONNECTION1_SYNAPSE4_H_