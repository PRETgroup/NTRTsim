#ifndef CONNECTION0_SYNAPSE6_H_
#define CONNECTION0_SYNAPSE6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse6 States
enum Connection0Synapse6States {
    CONNECTION0_SYNAPSE6_L,
};

// connection0_synapse6 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse6States state;
} Connection0Synapse6;

// connection0_synapse6 Initialisation function
void Connection0Synapse6Init(Connection0Synapse6* me);

// connection0_synapse6 Execution function
void Connection0Synapse6Run(Connection0Synapse6* me);

#endif // CONNECTION0_SYNAPSE6_H_