#ifndef CONNECTION0_SYNAPSE95_H_
#define CONNECTION0_SYNAPSE95_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse95 States
enum Connection0Synapse95States {
    CONNECTION0_SYNAPSE95_L,
};

// connection0_synapse95 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse95States state;
} Connection0Synapse95;

// connection0_synapse95 Initialisation function
void Connection0Synapse95Init(Connection0Synapse95* me);

// connection0_synapse95 Execution function
void Connection0Synapse95Run(Connection0Synapse95* me);

#endif // CONNECTION0_SYNAPSE95_H_