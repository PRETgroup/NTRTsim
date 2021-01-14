#ifndef CONNECTION1_SYNAPSE34_H_
#define CONNECTION1_SYNAPSE34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse34 States
enum Connection1Synapse34States {
    CONNECTION1_SYNAPSE34_L,
};

// connection1_synapse34 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse34States state;
} Connection1Synapse34;

// connection1_synapse34 Initialisation function
void Connection1Synapse34Init(Connection1Synapse34* me);

// connection1_synapse34 Execution function
void Connection1Synapse34Run(Connection1Synapse34* me);

#endif // CONNECTION1_SYNAPSE34_H_