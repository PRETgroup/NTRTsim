#ifndef CONNECTION1_SYNAPSE1_H_
#define CONNECTION1_SYNAPSE1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse1 States
enum Connection1Synapse1States {
    CONNECTION1_SYNAPSE1_L,
};

// connection1_synapse1 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse1States state;
} Connection1Synapse1;

// connection1_synapse1 Initialisation function
void Connection1Synapse1Init(Connection1Synapse1* me);

// connection1_synapse1 Execution function
void Connection1Synapse1Run(Connection1Synapse1* me);

#endif // CONNECTION1_SYNAPSE1_H_