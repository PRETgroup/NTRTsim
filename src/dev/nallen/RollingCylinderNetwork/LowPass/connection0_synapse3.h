#ifndef CONNECTION0_SYNAPSE3_H_
#define CONNECTION0_SYNAPSE3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse3 States
enum Connection0Synapse3States {
    CONNECTION0_SYNAPSE3_L,
};

// connection0_synapse3 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse3States state;
} Connection0Synapse3;

// connection0_synapse3 Initialisation function
void Connection0Synapse3Init(Connection0Synapse3* me);

// connection0_synapse3 Execution function
void Connection0Synapse3Run(Connection0Synapse3* me);

#endif // CONNECTION0_SYNAPSE3_H_