#ifndef CONNECTION1_SYNAPSE37_H_
#define CONNECTION1_SYNAPSE37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse37 States
enum Connection1Synapse37States {
    CONNECTION1_SYNAPSE37_L,
};

// connection1_synapse37 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse37States state;
} Connection1Synapse37;

// connection1_synapse37 Initialisation function
void Connection1Synapse37Init(Connection1Synapse37* me);

// connection1_synapse37 Execution function
void Connection1Synapse37Run(Connection1Synapse37* me);

#endif // CONNECTION1_SYNAPSE37_H_