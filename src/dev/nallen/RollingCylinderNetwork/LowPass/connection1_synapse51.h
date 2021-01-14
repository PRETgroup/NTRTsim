#ifndef CONNECTION1_SYNAPSE51_H_
#define CONNECTION1_SYNAPSE51_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse51 States
enum Connection1Synapse51States {
    CONNECTION1_SYNAPSE51_L,
};

// connection1_synapse51 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse51States state;
} Connection1Synapse51;

// connection1_synapse51 Initialisation function
void Connection1Synapse51Init(Connection1Synapse51* me);

// connection1_synapse51 Execution function
void Connection1Synapse51Run(Connection1Synapse51* me);

#endif // CONNECTION1_SYNAPSE51_H_