#ifndef CONNECTION0_SYNAPSE87_H_
#define CONNECTION0_SYNAPSE87_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse87 States
enum Connection0Synapse87States {
    CONNECTION0_SYNAPSE87_L,
};

// connection0_synapse87 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse87States state;
} Connection0Synapse87;

// connection0_synapse87 Initialisation function
void Connection0Synapse87Init(Connection0Synapse87* me);

// connection0_synapse87 Execution function
void Connection0Synapse87Run(Connection0Synapse87* me);

#endif // CONNECTION0_SYNAPSE87_H_