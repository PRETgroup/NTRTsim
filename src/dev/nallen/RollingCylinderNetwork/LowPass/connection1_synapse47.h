#ifndef CONNECTION1_SYNAPSE47_H_
#define CONNECTION1_SYNAPSE47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse47 States
enum Connection1Synapse47States {
    CONNECTION1_SYNAPSE47_L,
};

// connection1_synapse47 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse47States state;
} Connection1Synapse47;

// connection1_synapse47 Initialisation function
void Connection1Synapse47Init(Connection1Synapse47* me);

// connection1_synapse47 Execution function
void Connection1Synapse47Run(Connection1Synapse47* me);

#endif // CONNECTION1_SYNAPSE47_H_