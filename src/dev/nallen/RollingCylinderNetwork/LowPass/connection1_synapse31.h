#ifndef CONNECTION1_SYNAPSE31_H_
#define CONNECTION1_SYNAPSE31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse31 States
enum Connection1Synapse31States {
    CONNECTION1_SYNAPSE31_L,
};

// connection1_synapse31 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse31States state;
} Connection1Synapse31;

// connection1_synapse31 Initialisation function
void Connection1Synapse31Init(Connection1Synapse31* me);

// connection1_synapse31 Execution function
void Connection1Synapse31Run(Connection1Synapse31* me);

#endif // CONNECTION1_SYNAPSE31_H_