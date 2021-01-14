#ifndef CONNECTION1_SYNAPSE16_H_
#define CONNECTION1_SYNAPSE16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection1_synapse16 States
enum Connection1Synapse16States {
    CONNECTION1_SYNAPSE16_L,
};

// connection1_synapse16 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection1Synapse16States state;
} Connection1Synapse16;

// connection1_synapse16 Initialisation function
void Connection1Synapse16Init(Connection1Synapse16* me);

// connection1_synapse16 Execution function
void Connection1Synapse16Run(Connection1Synapse16* me);

#endif // CONNECTION1_SYNAPSE16_H_