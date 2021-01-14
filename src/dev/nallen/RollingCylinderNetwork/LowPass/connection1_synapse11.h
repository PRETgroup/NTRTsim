#ifndef CONNECTION1_SYNAPSE11_H_
#define CONNECTION1_SYNAPSE11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse11 States
enum Connection1Synapse11States {
    CONNECTION1_SYNAPSE11_L,
};

// connection1_synapse11 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse11States state;
} Connection1Synapse11;

// connection1_synapse11 Initialisation function
void Connection1Synapse11Init(Connection1Synapse11* me);

// connection1_synapse11 Execution function
void Connection1Synapse11Run(Connection1Synapse11* me);

#endif // CONNECTION1_SYNAPSE11_H_