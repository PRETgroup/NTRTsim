#ifndef CONNECTION1_SYNAPSE30_H_
#define CONNECTION1_SYNAPSE30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse30 States
enum Connection1Synapse30States {
    CONNECTION1_SYNAPSE30_L,
};

// connection1_synapse30 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse30States state;
} Connection1Synapse30;

// connection1_synapse30 Initialisation function
void Connection1Synapse30Init(Connection1Synapse30* me);

// connection1_synapse30 Execution function
void Connection1Synapse30Run(Connection1Synapse30* me);

#endif // CONNECTION1_SYNAPSE30_H_