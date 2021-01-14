#ifndef CONNECTION1_SYNAPSE33_H_
#define CONNECTION1_SYNAPSE33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse33 States
enum Connection1Synapse33States {
    CONNECTION1_SYNAPSE33_L,
};

// connection1_synapse33 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse33States state;
} Connection1Synapse33;

// connection1_synapse33 Initialisation function
void Connection1Synapse33Init(Connection1Synapse33* me);

// connection1_synapse33 Execution function
void Connection1Synapse33Run(Connection1Synapse33* me);

#endif // CONNECTION1_SYNAPSE33_H_