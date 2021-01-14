#ifndef CONNECTION1_SYNAPSE93_H_
#define CONNECTION1_SYNAPSE93_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse93 States
enum Connection1Synapse93States {
    CONNECTION1_SYNAPSE93_L,
};

// connection1_synapse93 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse93States state;
} Connection1Synapse93;

// connection1_synapse93 Initialisation function
void Connection1Synapse93Init(Connection1Synapse93* me);

// connection1_synapse93 Execution function
void Connection1Synapse93Run(Connection1Synapse93* me);

#endif // CONNECTION1_SYNAPSE93_H_