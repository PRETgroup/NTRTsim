#ifndef CONNECTION1_SYNAPSE72_H_
#define CONNECTION1_SYNAPSE72_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse72 States
enum Connection1Synapse72States {
    CONNECTION1_SYNAPSE72_L,
};

// connection1_synapse72 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse72States state;
} Connection1Synapse72;

// connection1_synapse72 Initialisation function
void Connection1Synapse72Init(Connection1Synapse72* me);

// connection1_synapse72 Execution function
void Connection1Synapse72Run(Connection1Synapse72* me);

#endif // CONNECTION1_SYNAPSE72_H_