#ifndef CONNECTION1_SYNAPSE43_H_
#define CONNECTION1_SYNAPSE43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse43 States
enum Connection1Synapse43States {
    CONNECTION1_SYNAPSE43_L,
};

// connection1_synapse43 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse43States state;
} Connection1Synapse43;

// connection1_synapse43 Initialisation function
void Connection1Synapse43Init(Connection1Synapse43* me);

// connection1_synapse43 Execution function
void Connection1Synapse43Run(Connection1Synapse43* me);

#endif // CONNECTION1_SYNAPSE43_H_