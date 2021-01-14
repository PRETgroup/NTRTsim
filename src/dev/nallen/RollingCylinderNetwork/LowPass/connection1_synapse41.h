#ifndef CONNECTION1_SYNAPSE41_H_
#define CONNECTION1_SYNAPSE41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse41 States
enum Connection1Synapse41States {
    CONNECTION1_SYNAPSE41_L,
};

// connection1_synapse41 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse41States state;
} Connection1Synapse41;

// connection1_synapse41 Initialisation function
void Connection1Synapse41Init(Connection1Synapse41* me);

// connection1_synapse41 Execution function
void Connection1Synapse41Run(Connection1Synapse41* me);

#endif // CONNECTION1_SYNAPSE41_H_