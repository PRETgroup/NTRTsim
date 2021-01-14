#ifndef CONNECTION1_SYNAPSE64_H_
#define CONNECTION1_SYNAPSE64_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse64 States
enum Connection1Synapse64States {
    CONNECTION1_SYNAPSE64_L,
};

// connection1_synapse64 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse64States state;
} Connection1Synapse64;

// connection1_synapse64 Initialisation function
void Connection1Synapse64Init(Connection1Synapse64* me);

// connection1_synapse64 Execution function
void Connection1Synapse64Run(Connection1Synapse64* me);

#endif // CONNECTION1_SYNAPSE64_H_