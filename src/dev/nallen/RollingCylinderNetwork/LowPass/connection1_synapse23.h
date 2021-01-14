#ifndef CONNECTION1_SYNAPSE23_H_
#define CONNECTION1_SYNAPSE23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse23 States
enum Connection1Synapse23States {
    CONNECTION1_SYNAPSE23_L,
};

// connection1_synapse23 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse23States state;
} Connection1Synapse23;

// connection1_synapse23 Initialisation function
void Connection1Synapse23Init(Connection1Synapse23* me);

// connection1_synapse23 Execution function
void Connection1Synapse23Run(Connection1Synapse23* me);

#endif // CONNECTION1_SYNAPSE23_H_