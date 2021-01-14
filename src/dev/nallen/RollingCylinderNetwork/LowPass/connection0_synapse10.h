#ifndef CONNECTION0_SYNAPSE10_H_
#define CONNECTION0_SYNAPSE10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse10 States
enum Connection0Synapse10States {
    CONNECTION0_SYNAPSE10_L,
};

// connection0_synapse10 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse10States state;
} Connection0Synapse10;

// connection0_synapse10 Initialisation function
void Connection0Synapse10Init(Connection0Synapse10* me);

// connection0_synapse10 Execution function
void Connection0Synapse10Run(Connection0Synapse10* me);

#endif // CONNECTION0_SYNAPSE10_H_