#ifndef CONNECTION0_SYNAPSE91_H_
#define CONNECTION0_SYNAPSE91_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse91 States
enum Connection0Synapse91States {
    CONNECTION0_SYNAPSE91_L,
};

// connection0_synapse91 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse91States state;
} Connection0Synapse91;

// connection0_synapse91 Initialisation function
void Connection0Synapse91Init(Connection0Synapse91* me);

// connection0_synapse91 Execution function
void Connection0Synapse91Run(Connection0Synapse91* me);

#endif // CONNECTION0_SYNAPSE91_H_