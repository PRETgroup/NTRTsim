#ifndef CONNECTION0_SYNAPSE26_H_
#define CONNECTION0_SYNAPSE26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse26 States
enum Connection0Synapse26States {
    CONNECTION0_SYNAPSE26_L,
};

// connection0_synapse26 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse26States state;
} Connection0Synapse26;

// connection0_synapse26 Initialisation function
void Connection0Synapse26Init(Connection0Synapse26* me);

// connection0_synapse26 Execution function
void Connection0Synapse26Run(Connection0Synapse26* me);

#endif // CONNECTION0_SYNAPSE26_H_