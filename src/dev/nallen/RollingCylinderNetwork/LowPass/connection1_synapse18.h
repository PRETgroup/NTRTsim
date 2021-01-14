#ifndef CONNECTION1_SYNAPSE18_H_
#define CONNECTION1_SYNAPSE18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse18 States
enum Connection1Synapse18States {
    CONNECTION1_SYNAPSE18_L,
};

// connection1_synapse18 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse18States state;
} Connection1Synapse18;

// connection1_synapse18 Initialisation function
void Connection1Synapse18Init(Connection1Synapse18* me);

// connection1_synapse18 Execution function
void Connection1Synapse18Run(Connection1Synapse18* me);

#endif // CONNECTION1_SYNAPSE18_H_