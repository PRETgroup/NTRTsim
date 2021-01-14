#ifndef CONNECTION1_SYNAPSE7_H_
#define CONNECTION1_SYNAPSE7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse7 States
enum Connection1Synapse7States {
    CONNECTION1_SYNAPSE7_L,
};

// connection1_synapse7 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse7States state;
} Connection1Synapse7;

// connection1_synapse7 Initialisation function
void Connection1Synapse7Init(Connection1Synapse7* me);

// connection1_synapse7 Execution function
void Connection1Synapse7Run(Connection1Synapse7* me);

#endif // CONNECTION1_SYNAPSE7_H_