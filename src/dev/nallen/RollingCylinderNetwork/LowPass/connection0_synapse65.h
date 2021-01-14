#ifndef CONNECTION0_SYNAPSE65_H_
#define CONNECTION0_SYNAPSE65_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse65 States
enum Connection0Synapse65States {
    CONNECTION0_SYNAPSE65_L,
};

// connection0_synapse65 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse65States state;
} Connection0Synapse65;

// connection0_synapse65 Initialisation function
void Connection0Synapse65Init(Connection0Synapse65* me);

// connection0_synapse65 Execution function
void Connection0Synapse65Run(Connection0Synapse65* me);

#endif // CONNECTION0_SYNAPSE65_H_