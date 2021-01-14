#ifndef CONNECTION1_SYNAPSE62_H_
#define CONNECTION1_SYNAPSE62_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse62 States
enum Connection1Synapse62States {
    CONNECTION1_SYNAPSE62_L,
};

// connection1_synapse62 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse62States state;
} Connection1Synapse62;

// connection1_synapse62 Initialisation function
void Connection1Synapse62Init(Connection1Synapse62* me);

// connection1_synapse62 Execution function
void Connection1Synapse62Run(Connection1Synapse62* me);

#endif // CONNECTION1_SYNAPSE62_H_