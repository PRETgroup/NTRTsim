#ifndef CONNECTION0_SYNAPSE85_H_
#define CONNECTION0_SYNAPSE85_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse85 States
enum Connection0Synapse85States {
    CONNECTION0_SYNAPSE85_L,
};

// connection0_synapse85 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse85States state;
} Connection0Synapse85;

// connection0_synapse85 Initialisation function
void Connection0Synapse85Init(Connection0Synapse85* me);

// connection0_synapse85 Execution function
void Connection0Synapse85Run(Connection0Synapse85* me);

#endif // CONNECTION0_SYNAPSE85_H_