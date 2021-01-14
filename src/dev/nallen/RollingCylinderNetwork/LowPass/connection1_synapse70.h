#ifndef CONNECTION1_SYNAPSE70_H_
#define CONNECTION1_SYNAPSE70_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse70 States
enum Connection1Synapse70States {
    CONNECTION1_SYNAPSE70_L,
};

// connection1_synapse70 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse70States state;
} Connection1Synapse70;

// connection1_synapse70 Initialisation function
void Connection1Synapse70Init(Connection1Synapse70* me);

// connection1_synapse70 Execution function
void Connection1Synapse70Run(Connection1Synapse70* me);

#endif // CONNECTION1_SYNAPSE70_H_