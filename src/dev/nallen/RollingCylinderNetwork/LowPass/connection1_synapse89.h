#ifndef CONNECTION1_SYNAPSE89_H_
#define CONNECTION1_SYNAPSE89_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse89 States
enum Connection1Synapse89States {
    CONNECTION1_SYNAPSE89_L,
};

// connection1_synapse89 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse89States state;
} Connection1Synapse89;

// connection1_synapse89 Initialisation function
void Connection1Synapse89Init(Connection1Synapse89* me);

// connection1_synapse89 Execution function
void Connection1Synapse89Run(Connection1Synapse89* me);

#endif // CONNECTION1_SYNAPSE89_H_