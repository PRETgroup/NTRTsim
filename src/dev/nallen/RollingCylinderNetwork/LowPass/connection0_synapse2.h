#ifndef CONNECTION0_SYNAPSE2_H_
#define CONNECTION0_SYNAPSE2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse2 States
enum Connection0Synapse2States {
    CONNECTION0_SYNAPSE2_L,
};

// connection0_synapse2 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse2States state;
} Connection0Synapse2;

// connection0_synapse2 Initialisation function
void Connection0Synapse2Init(Connection0Synapse2* me);

// connection0_synapse2 Execution function
void Connection0Synapse2Run(Connection0Synapse2* me);

#endif // CONNECTION0_SYNAPSE2_H_