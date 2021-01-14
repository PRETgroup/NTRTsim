#ifndef CONNECTION1_SYNAPSE88_H_
#define CONNECTION1_SYNAPSE88_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse88 States
enum Connection1Synapse88States {
    CONNECTION1_SYNAPSE88_L,
};

// connection1_synapse88 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse88States state;
} Connection1Synapse88;

// connection1_synapse88 Initialisation function
void Connection1Synapse88Init(Connection1Synapse88* me);

// connection1_synapse88 Execution function
void Connection1Synapse88Run(Connection1Synapse88* me);

#endif // CONNECTION1_SYNAPSE88_H_