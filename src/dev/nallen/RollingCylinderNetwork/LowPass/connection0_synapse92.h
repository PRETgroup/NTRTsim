#ifndef CONNECTION0_SYNAPSE92_H_
#define CONNECTION0_SYNAPSE92_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse92 States
enum Connection0Synapse92States {
    CONNECTION0_SYNAPSE92_L,
};

// connection0_synapse92 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse92States state;
} Connection0Synapse92;

// connection0_synapse92 Initialisation function
void Connection0Synapse92Init(Connection0Synapse92* me);

// connection0_synapse92 Execution function
void Connection0Synapse92Run(Connection0Synapse92* me);

#endif // CONNECTION0_SYNAPSE92_H_