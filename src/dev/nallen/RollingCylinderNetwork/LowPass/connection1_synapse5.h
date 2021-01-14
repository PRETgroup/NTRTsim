#ifndef CONNECTION1_SYNAPSE5_H_
#define CONNECTION1_SYNAPSE5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse5 States
enum Connection1Synapse5States {
    CONNECTION1_SYNAPSE5_L,
};

// connection1_synapse5 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse5States state;
} Connection1Synapse5;

// connection1_synapse5 Initialisation function
void Connection1Synapse5Init(Connection1Synapse5* me);

// connection1_synapse5 Execution function
void Connection1Synapse5Run(Connection1Synapse5* me);

#endif // CONNECTION1_SYNAPSE5_H_