#ifndef CONNECTION1_SYNAPSE74_H_
#define CONNECTION1_SYNAPSE74_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse74 States
enum Connection1Synapse74States {
    CONNECTION1_SYNAPSE74_L,
};

// connection1_synapse74 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse74States state;
} Connection1Synapse74;

// connection1_synapse74 Initialisation function
void Connection1Synapse74Init(Connection1Synapse74* me);

// connection1_synapse74 Execution function
void Connection1Synapse74Run(Connection1Synapse74* me);

#endif // CONNECTION1_SYNAPSE74_H_