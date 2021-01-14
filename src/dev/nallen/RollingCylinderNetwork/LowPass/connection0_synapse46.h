#ifndef CONNECTION0_SYNAPSE46_H_
#define CONNECTION0_SYNAPSE46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse46 States
enum Connection0Synapse46States {
    CONNECTION0_SYNAPSE46_L,
};

// connection0_synapse46 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse46States state;
} Connection0Synapse46;

// connection0_synapse46 Initialisation function
void Connection0Synapse46Init(Connection0Synapse46* me);

// connection0_synapse46 Execution function
void Connection0Synapse46Run(Connection0Synapse46* me);

#endif // CONNECTION0_SYNAPSE46_H_