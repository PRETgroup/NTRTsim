#ifndef CONNECTION0_SYNAPSE71_H_
#define CONNECTION0_SYNAPSE71_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse71 States
enum Connection0Synapse71States {
    CONNECTION0_SYNAPSE71_L,
};

// connection0_synapse71 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse71States state;
} Connection0Synapse71;

// connection0_synapse71 Initialisation function
void Connection0Synapse71Init(Connection0Synapse71* me);

// connection0_synapse71 Execution function
void Connection0Synapse71Run(Connection0Synapse71* me);

#endif // CONNECTION0_SYNAPSE71_H_