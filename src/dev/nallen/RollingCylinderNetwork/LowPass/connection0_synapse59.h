#ifndef CONNECTION0_SYNAPSE59_H_
#define CONNECTION0_SYNAPSE59_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse59 States
enum Connection0Synapse59States {
    CONNECTION0_SYNAPSE59_L,
};

// connection0_synapse59 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse59States state;
} Connection0Synapse59;

// connection0_synapse59 Initialisation function
void Connection0Synapse59Init(Connection0Synapse59* me);

// connection0_synapse59 Execution function
void Connection0Synapse59Run(Connection0Synapse59* me);

#endif // CONNECTION0_SYNAPSE59_H_