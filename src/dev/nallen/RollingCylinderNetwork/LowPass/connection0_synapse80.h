#ifndef CONNECTION0_SYNAPSE80_H_
#define CONNECTION0_SYNAPSE80_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse80 States
enum Connection0Synapse80States {
    CONNECTION0_SYNAPSE80_L,
};

// connection0_synapse80 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse80States state;
} Connection0Synapse80;

// connection0_synapse80 Initialisation function
void Connection0Synapse80Init(Connection0Synapse80* me);

// connection0_synapse80 Execution function
void Connection0Synapse80Run(Connection0Synapse80* me);

#endif // CONNECTION0_SYNAPSE80_H_