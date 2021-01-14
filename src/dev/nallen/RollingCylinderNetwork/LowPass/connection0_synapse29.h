#ifndef CONNECTION0_SYNAPSE29_H_
#define CONNECTION0_SYNAPSE29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse29 States
enum Connection0Synapse29States {
    CONNECTION0_SYNAPSE29_L,
};

// connection0_synapse29 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse29States state;
} Connection0Synapse29;

// connection0_synapse29 Initialisation function
void Connection0Synapse29Init(Connection0Synapse29* me);

// connection0_synapse29 Execution function
void Connection0Synapse29Run(Connection0Synapse29* me);

#endif // CONNECTION0_SYNAPSE29_H_