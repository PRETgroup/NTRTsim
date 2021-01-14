#ifndef CONNECTION0_SYNAPSE77_H_
#define CONNECTION0_SYNAPSE77_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse77 States
enum Connection0Synapse77States {
    CONNECTION0_SYNAPSE77_L,
};

// connection0_synapse77 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse77States state;
} Connection0Synapse77;

// connection0_synapse77 Initialisation function
void Connection0Synapse77Init(Connection0Synapse77* me);

// connection0_synapse77 Execution function
void Connection0Synapse77Run(Connection0Synapse77* me);

#endif // CONNECTION0_SYNAPSE77_H_