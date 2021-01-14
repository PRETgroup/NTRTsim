#ifndef CONNECTION0_SYNAPSE75_H_
#define CONNECTION0_SYNAPSE75_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse75 States
enum Connection0Synapse75States {
    CONNECTION0_SYNAPSE75_L,
};

// connection0_synapse75 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse75States state;
} Connection0Synapse75;

// connection0_synapse75 Initialisation function
void Connection0Synapse75Init(Connection0Synapse75* me);

// connection0_synapse75 Execution function
void Connection0Synapse75Run(Connection0Synapse75* me);

#endif // CONNECTION0_SYNAPSE75_H_