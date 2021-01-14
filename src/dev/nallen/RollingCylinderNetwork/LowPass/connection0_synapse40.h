#ifndef CONNECTION0_SYNAPSE40_H_
#define CONNECTION0_SYNAPSE40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse40 States
enum Connection0Synapse40States {
    CONNECTION0_SYNAPSE40_L,
};

// connection0_synapse40 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse40States state;
} Connection0Synapse40;

// connection0_synapse40 Initialisation function
void Connection0Synapse40Init(Connection0Synapse40* me);

// connection0_synapse40 Execution function
void Connection0Synapse40Run(Connection0Synapse40* me);

#endif // CONNECTION0_SYNAPSE40_H_