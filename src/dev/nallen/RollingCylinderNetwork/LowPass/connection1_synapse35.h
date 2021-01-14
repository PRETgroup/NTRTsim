#ifndef CONNECTION1_SYNAPSE35_H_
#define CONNECTION1_SYNAPSE35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse35 States
enum Connection1Synapse35States {
    CONNECTION1_SYNAPSE35_L,
};

// connection1_synapse35 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse35States state;
} Connection1Synapse35;

// connection1_synapse35 Initialisation function
void Connection1Synapse35Init(Connection1Synapse35* me);

// connection1_synapse35 Execution function
void Connection1Synapse35Run(Connection1Synapse35* me);

#endif // CONNECTION1_SYNAPSE35_H_