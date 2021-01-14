#ifndef CONNECTION1_SYNAPSE38_H_
#define CONNECTION1_SYNAPSE38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse38 States
enum Connection1Synapse38States {
    CONNECTION1_SYNAPSE38_L,
};

// connection1_synapse38 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse38States state;
} Connection1Synapse38;

// connection1_synapse38 Initialisation function
void Connection1Synapse38Init(Connection1Synapse38* me);

// connection1_synapse38 Execution function
void Connection1Synapse38Run(Connection1Synapse38* me);

#endif // CONNECTION1_SYNAPSE38_H_