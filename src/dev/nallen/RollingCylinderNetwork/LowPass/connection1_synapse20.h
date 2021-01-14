#ifndef CONNECTION1_SYNAPSE20_H_
#define CONNECTION1_SYNAPSE20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse20 States
enum Connection1Synapse20States {
    CONNECTION1_SYNAPSE20_L,
};

// connection1_synapse20 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse20States state;
} Connection1Synapse20;

// connection1_synapse20 Initialisation function
void Connection1Synapse20Init(Connection1Synapse20* me);

// connection1_synapse20 Execution function
void Connection1Synapse20Run(Connection1Synapse20* me);

#endif // CONNECTION1_SYNAPSE20_H_