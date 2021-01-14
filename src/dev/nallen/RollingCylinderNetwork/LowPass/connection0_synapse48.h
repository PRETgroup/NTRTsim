#ifndef CONNECTION0_SYNAPSE48_H_
#define CONNECTION0_SYNAPSE48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse48 States
enum Connection0Synapse48States {
    CONNECTION0_SYNAPSE48_L,
};

// connection0_synapse48 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse48States state;
} Connection0Synapse48;

// connection0_synapse48 Initialisation function
void Connection0Synapse48Init(Connection0Synapse48* me);

// connection0_synapse48 Execution function
void Connection0Synapse48Run(Connection0Synapse48* me);

#endif // CONNECTION0_SYNAPSE48_H_