#ifndef CONNECTION1_SYNAPSE83_H_
#define CONNECTION1_SYNAPSE83_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse83 States
enum Connection1Synapse83States {
    CONNECTION1_SYNAPSE83_L,
};

// connection1_synapse83 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse83States state;
} Connection1Synapse83;

// connection1_synapse83 Initialisation function
void Connection1Synapse83Init(Connection1Synapse83* me);

// connection1_synapse83 Execution function
void Connection1Synapse83Run(Connection1Synapse83* me);

#endif // CONNECTION1_SYNAPSE83_H_