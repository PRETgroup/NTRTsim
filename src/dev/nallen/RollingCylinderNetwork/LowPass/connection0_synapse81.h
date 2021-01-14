#ifndef CONNECTION0_SYNAPSE81_H_
#define CONNECTION0_SYNAPSE81_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse81 States
enum Connection0Synapse81States {
    CONNECTION0_SYNAPSE81_L,
};

// connection0_synapse81 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse81States state;
} Connection0Synapse81;

// connection0_synapse81 Initialisation function
void Connection0Synapse81Init(Connection0Synapse81* me);

// connection0_synapse81 Execution function
void Connection0Synapse81Run(Connection0Synapse81* me);

#endif // CONNECTION0_SYNAPSE81_H_