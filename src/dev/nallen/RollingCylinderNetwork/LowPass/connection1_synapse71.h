#ifndef CONNECTION1_SYNAPSE71_H_
#define CONNECTION1_SYNAPSE71_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse71 States
enum Connection1Synapse71States {
    CONNECTION1_SYNAPSE71_L,
};

// connection1_synapse71 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse71States state;
} Connection1Synapse71;

// connection1_synapse71 Initialisation function
void Connection1Synapse71Init(Connection1Synapse71* me);

// connection1_synapse71 Execution function
void Connection1Synapse71Run(Connection1Synapse71* me);

#endif // CONNECTION1_SYNAPSE71_H_