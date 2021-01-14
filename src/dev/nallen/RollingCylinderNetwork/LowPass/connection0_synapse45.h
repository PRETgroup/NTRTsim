#ifndef CONNECTION0_SYNAPSE45_H_
#define CONNECTION0_SYNAPSE45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse45 States
enum Connection0Synapse45States {
    CONNECTION0_SYNAPSE45_L,
};

// connection0_synapse45 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse45States state;
} Connection0Synapse45;

// connection0_synapse45 Initialisation function
void Connection0Synapse45Init(Connection0Synapse45* me);

// connection0_synapse45 Execution function
void Connection0Synapse45Run(Connection0Synapse45* me);

#endif // CONNECTION0_SYNAPSE45_H_