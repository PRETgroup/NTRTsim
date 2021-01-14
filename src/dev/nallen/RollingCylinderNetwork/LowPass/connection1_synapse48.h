#ifndef CONNECTION1_SYNAPSE48_H_
#define CONNECTION1_SYNAPSE48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse48 States
enum Connection1Synapse48States {
    CONNECTION1_SYNAPSE48_L,
};

// connection1_synapse48 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse48States state;
} Connection1Synapse48;

// connection1_synapse48 Initialisation function
void Connection1Synapse48Init(Connection1Synapse48* me);

// connection1_synapse48 Execution function
void Connection1Synapse48Run(Connection1Synapse48* me);

#endif // CONNECTION1_SYNAPSE48_H_