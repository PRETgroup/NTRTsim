#ifndef CONNECTION0_SYNAPSE97_H_
#define CONNECTION0_SYNAPSE97_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse97 States
enum Connection0Synapse97States {
    CONNECTION0_SYNAPSE97_L,
};

// connection0_synapse97 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse97States state;
} Connection0Synapse97;

// connection0_synapse97 Initialisation function
void Connection0Synapse97Init(Connection0Synapse97* me);

// connection0_synapse97 Execution function
void Connection0Synapse97Run(Connection0Synapse97* me);

#endif // CONNECTION0_SYNAPSE97_H_