#ifndef CONNECTION1_SYNAPSE9_H_
#define CONNECTION1_SYNAPSE9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse9 States
enum Connection1Synapse9States {
    CONNECTION1_SYNAPSE9_L,
};

// connection1_synapse9 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse9States state;
} Connection1Synapse9;

// connection1_synapse9 Initialisation function
void Connection1Synapse9Init(Connection1Synapse9* me);

// connection1_synapse9 Execution function
void Connection1Synapse9Run(Connection1Synapse9* me);

#endif // CONNECTION1_SYNAPSE9_H_