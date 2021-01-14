#ifndef CONNECTION1_SYNAPSE96_H_
#define CONNECTION1_SYNAPSE96_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse96 States
enum Connection1Synapse96States {
    CONNECTION1_SYNAPSE96_L,
};

// connection1_synapse96 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse96States state;
} Connection1Synapse96;

// connection1_synapse96 Initialisation function
void Connection1Synapse96Init(Connection1Synapse96* me);

// connection1_synapse96 Execution function
void Connection1Synapse96Run(Connection1Synapse96* me);

#endif // CONNECTION1_SYNAPSE96_H_