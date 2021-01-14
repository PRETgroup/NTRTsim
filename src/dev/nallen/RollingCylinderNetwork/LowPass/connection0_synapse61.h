#ifndef CONNECTION0_SYNAPSE61_H_
#define CONNECTION0_SYNAPSE61_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse61 States
enum Connection0Synapse61States {
    CONNECTION0_SYNAPSE61_L,
};

// connection0_synapse61 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse61States state;
} Connection0Synapse61;

// connection0_synapse61 Initialisation function
void Connection0Synapse61Init(Connection0Synapse61* me);

// connection0_synapse61 Execution function
void Connection0Synapse61Run(Connection0Synapse61* me);

#endif // CONNECTION0_SYNAPSE61_H_