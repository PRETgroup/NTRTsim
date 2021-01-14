#ifndef CONNECTION1_SYNAPSE53_H_
#define CONNECTION1_SYNAPSE53_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse53 States
enum Connection1Synapse53States {
    CONNECTION1_SYNAPSE53_L,
};

// connection1_synapse53 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse53States state;
} Connection1Synapse53;

// connection1_synapse53 Initialisation function
void Connection1Synapse53Init(Connection1Synapse53* me);

// connection1_synapse53 Execution function
void Connection1Synapse53Run(Connection1Synapse53* me);

#endif // CONNECTION1_SYNAPSE53_H_