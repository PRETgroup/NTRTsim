#ifndef CONNECTION0_SYNAPSE15_H_
#define CONNECTION0_SYNAPSE15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse15 States
enum Connection0Synapse15States {
    CONNECTION0_SYNAPSE15_L,
};

// connection0_synapse15 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse15States state;
} Connection0Synapse15;

// connection0_synapse15 Initialisation function
void Connection0Synapse15Init(Connection0Synapse15* me);

// connection0_synapse15 Execution function
void Connection0Synapse15Run(Connection0Synapse15* me);

#endif // CONNECTION0_SYNAPSE15_H_