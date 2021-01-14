#ifndef CONNECTION0_SYNAPSE67_H_
#define CONNECTION0_SYNAPSE67_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse67 States
enum Connection0Synapse67States {
    CONNECTION0_SYNAPSE67_L,
};

// connection0_synapse67 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse67States state;
} Connection0Synapse67;

// connection0_synapse67 Initialisation function
void Connection0Synapse67Init(Connection0Synapse67* me);

// connection0_synapse67 Execution function
void Connection0Synapse67Run(Connection0Synapse67* me);

#endif // CONNECTION0_SYNAPSE67_H_