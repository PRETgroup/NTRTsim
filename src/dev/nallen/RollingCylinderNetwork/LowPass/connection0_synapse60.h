#ifndef CONNECTION0_SYNAPSE60_H_
#define CONNECTION0_SYNAPSE60_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse60 States
enum Connection0Synapse60States {
    CONNECTION0_SYNAPSE60_L,
};

// connection0_synapse60 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse60States state;
} Connection0Synapse60;

// connection0_synapse60 Initialisation function
void Connection0Synapse60Init(Connection0Synapse60* me);

// connection0_synapse60 Execution function
void Connection0Synapse60Run(Connection0Synapse60* me);

#endif // CONNECTION0_SYNAPSE60_H_