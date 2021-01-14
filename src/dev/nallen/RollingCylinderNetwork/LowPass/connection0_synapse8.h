#ifndef CONNECTION0_SYNAPSE8_H_
#define CONNECTION0_SYNAPSE8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse8 States
enum Connection0Synapse8States {
    CONNECTION0_SYNAPSE8_L,
};

// connection0_synapse8 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse8States state;
} Connection0Synapse8;

// connection0_synapse8 Initialisation function
void Connection0Synapse8Init(Connection0Synapse8* me);

// connection0_synapse8 Execution function
void Connection0Synapse8Run(Connection0Synapse8* me);

#endif // CONNECTION0_SYNAPSE8_H_