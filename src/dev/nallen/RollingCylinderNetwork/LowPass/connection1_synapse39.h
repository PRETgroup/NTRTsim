#ifndef CONNECTION1_SYNAPSE39_H_
#define CONNECTION1_SYNAPSE39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse39 States
enum Connection1Synapse39States {
    CONNECTION1_SYNAPSE39_L,
};

// connection1_synapse39 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse39States state;
} Connection1Synapse39;

// connection1_synapse39 Initialisation function
void Connection1Synapse39Init(Connection1Synapse39* me);

// connection1_synapse39 Execution function
void Connection1Synapse39Run(Connection1Synapse39* me);

#endif // CONNECTION1_SYNAPSE39_H_