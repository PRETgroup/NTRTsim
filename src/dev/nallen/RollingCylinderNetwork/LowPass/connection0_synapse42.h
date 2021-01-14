#ifndef CONNECTION0_SYNAPSE42_H_
#define CONNECTION0_SYNAPSE42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse42 States
enum Connection0Synapse42States {
    CONNECTION0_SYNAPSE42_L,
};

// connection0_synapse42 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse42States state;
} Connection0Synapse42;

// connection0_synapse42 Initialisation function
void Connection0Synapse42Init(Connection0Synapse42* me);

// connection0_synapse42 Execution function
void Connection0Synapse42Run(Connection0Synapse42* me);

#endif // CONNECTION0_SYNAPSE42_H_