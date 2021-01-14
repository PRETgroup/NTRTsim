#ifndef CONNECTION0_SYNAPSE55_H_
#define CONNECTION0_SYNAPSE55_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse55 States
enum Connection0Synapse55States {
    CONNECTION0_SYNAPSE55_L,
};

// connection0_synapse55 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse55States state;
} Connection0Synapse55;

// connection0_synapse55 Initialisation function
void Connection0Synapse55Init(Connection0Synapse55* me);

// connection0_synapse55 Execution function
void Connection0Synapse55Run(Connection0Synapse55* me);

#endif // CONNECTION0_SYNAPSE55_H_