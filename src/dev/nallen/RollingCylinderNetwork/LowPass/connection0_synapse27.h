#ifndef CONNECTION0_SYNAPSE27_H_
#define CONNECTION0_SYNAPSE27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse27 States
enum Connection0Synapse27States {
    CONNECTION0_SYNAPSE27_L,
};

// connection0_synapse27 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse27States state;
} Connection0Synapse27;

// connection0_synapse27 Initialisation function
void Connection0Synapse27Init(Connection0Synapse27* me);

// connection0_synapse27 Execution function
void Connection0Synapse27Run(Connection0Synapse27* me);

#endif // CONNECTION0_SYNAPSE27_H_