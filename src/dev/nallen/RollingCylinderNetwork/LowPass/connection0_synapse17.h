#ifndef CONNECTION0_SYNAPSE17_H_
#define CONNECTION0_SYNAPSE17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse17 States
enum Connection0Synapse17States {
    CONNECTION0_SYNAPSE17_L,
};

// connection0_synapse17 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse17States state;
} Connection0Synapse17;

// connection0_synapse17 Initialisation function
void Connection0Synapse17Init(Connection0Synapse17* me);

// connection0_synapse17 Execution function
void Connection0Synapse17Run(Connection0Synapse17* me);

#endif // CONNECTION0_SYNAPSE17_H_