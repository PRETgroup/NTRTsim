#ifndef CONNECTION1_SYNAPSE78_H_
#define CONNECTION1_SYNAPSE78_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse78 States
enum Connection1Synapse78States {
    CONNECTION1_SYNAPSE78_L,
};

// connection1_synapse78 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse78States state;
} Connection1Synapse78;

// connection1_synapse78 Initialisation function
void Connection1Synapse78Init(Connection1Synapse78* me);

// connection1_synapse78 Execution function
void Connection1Synapse78Run(Connection1Synapse78* me);

#endif // CONNECTION1_SYNAPSE78_H_