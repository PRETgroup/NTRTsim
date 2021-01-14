#ifndef CONNECTION0_SYNAPSE57_H_
#define CONNECTION0_SYNAPSE57_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse57 States
enum Connection0Synapse57States {
    CONNECTION0_SYNAPSE57_L,
};

// connection0_synapse57 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse57States state;
} Connection0Synapse57;

// connection0_synapse57 Initialisation function
void Connection0Synapse57Init(Connection0Synapse57* me);

// connection0_synapse57 Execution function
void Connection0Synapse57Run(Connection0Synapse57* me);

#endif // CONNECTION0_SYNAPSE57_H_