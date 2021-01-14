#ifndef CONNECTION0_SYNAPSE58_H_
#define CONNECTION0_SYNAPSE58_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse58 States
enum Connection0Synapse58States {
    CONNECTION0_SYNAPSE58_L,
};

// connection0_synapse58 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse58States state;
} Connection0Synapse58;

// connection0_synapse58 Initialisation function
void Connection0Synapse58Init(Connection0Synapse58* me);

// connection0_synapse58 Execution function
void Connection0Synapse58Run(Connection0Synapse58* me);

#endif // CONNECTION0_SYNAPSE58_H_