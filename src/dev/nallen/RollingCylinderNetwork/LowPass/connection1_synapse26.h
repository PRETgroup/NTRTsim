#ifndef CONNECTION1_SYNAPSE26_H_
#define CONNECTION1_SYNAPSE26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse26 States
enum Connection1Synapse26States {
    CONNECTION1_SYNAPSE26_L,
};

// connection1_synapse26 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse26States state;
} Connection1Synapse26;

// connection1_synapse26 Initialisation function
void Connection1Synapse26Init(Connection1Synapse26* me);

// connection1_synapse26 Execution function
void Connection1Synapse26Run(Connection1Synapse26* me);

#endif // CONNECTION1_SYNAPSE26_H_