#ifndef CONNECTION1_SYNAPSE24_H_
#define CONNECTION1_SYNAPSE24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse24 States
enum Connection1Synapse24States {
    CONNECTION1_SYNAPSE24_L,
};

// connection1_synapse24 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse24States state;
} Connection1Synapse24;

// connection1_synapse24 Initialisation function
void Connection1Synapse24Init(Connection1Synapse24* me);

// connection1_synapse24 Execution function
void Connection1Synapse24Run(Connection1Synapse24* me);

#endif // CONNECTION1_SYNAPSE24_H_