#ifndef CONNECTION1_SYNAPSE32_H_
#define CONNECTION1_SYNAPSE32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse32 States
enum Connection1Synapse32States {
    CONNECTION1_SYNAPSE32_L,
};

// connection1_synapse32 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse32States state;
} Connection1Synapse32;

// connection1_synapse32 Initialisation function
void Connection1Synapse32Init(Connection1Synapse32* me);

// connection1_synapse32 Execution function
void Connection1Synapse32Run(Connection1Synapse32* me);

#endif // CONNECTION1_SYNAPSE32_H_