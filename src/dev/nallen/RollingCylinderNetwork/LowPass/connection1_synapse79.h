#ifndef CONNECTION1_SYNAPSE79_H_
#define CONNECTION1_SYNAPSE79_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse79 States
enum Connection1Synapse79States {
    CONNECTION1_SYNAPSE79_L,
};

// connection1_synapse79 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse79States state;
} Connection1Synapse79;

// connection1_synapse79 Initialisation function
void Connection1Synapse79Init(Connection1Synapse79* me);

// connection1_synapse79 Execution function
void Connection1Synapse79Run(Connection1Synapse79* me);

#endif // CONNECTION1_SYNAPSE79_H_