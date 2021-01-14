#ifndef CONNECTION1_SYNAPSE68_H_
#define CONNECTION1_SYNAPSE68_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse68 States
enum Connection1Synapse68States {
    CONNECTION1_SYNAPSE68_L,
};

// connection1_synapse68 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse68States state;
} Connection1Synapse68;

// connection1_synapse68 Initialisation function
void Connection1Synapse68Init(Connection1Synapse68* me);

// connection1_synapse68 Execution function
void Connection1Synapse68Run(Connection1Synapse68* me);

#endif // CONNECTION1_SYNAPSE68_H_