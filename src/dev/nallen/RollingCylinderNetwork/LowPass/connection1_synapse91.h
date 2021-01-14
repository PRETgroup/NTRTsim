#ifndef CONNECTION1_SYNAPSE91_H_
#define CONNECTION1_SYNAPSE91_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse91 States
enum Connection1Synapse91States {
    CONNECTION1_SYNAPSE91_L,
};

// connection1_synapse91 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse91States state;
} Connection1Synapse91;

// connection1_synapse91 Initialisation function
void Connection1Synapse91Init(Connection1Synapse91* me);

// connection1_synapse91 Execution function
void Connection1Synapse91Run(Connection1Synapse91* me);

#endif // CONNECTION1_SYNAPSE91_H_