#ifndef CONNECTION1_SYNAPSE13_H_
#define CONNECTION1_SYNAPSE13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse13 States
enum Connection1Synapse13States {
    CONNECTION1_SYNAPSE13_L,
};

// connection1_synapse13 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse13States state;
} Connection1Synapse13;

// connection1_synapse13 Initialisation function
void Connection1Synapse13Init(Connection1Synapse13* me);

// connection1_synapse13 Execution function
void Connection1Synapse13Run(Connection1Synapse13* me);

#endif // CONNECTION1_SYNAPSE13_H_