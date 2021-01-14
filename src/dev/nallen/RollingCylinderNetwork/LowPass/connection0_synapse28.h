#ifndef CONNECTION0_SYNAPSE28_H_
#define CONNECTION0_SYNAPSE28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse28 States
enum Connection0Synapse28States {
    CONNECTION0_SYNAPSE28_L,
};

// connection0_synapse28 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse28States state;
} Connection0Synapse28;

// connection0_synapse28 Initialisation function
void Connection0Synapse28Init(Connection0Synapse28* me);

// connection0_synapse28 Execution function
void Connection0Synapse28Run(Connection0Synapse28* me);

#endif // CONNECTION0_SYNAPSE28_H_