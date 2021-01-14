#ifndef CONNECTION0_SYNAPSE1_H_
#define CONNECTION0_SYNAPSE1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse1 States
enum Connection0Synapse1States {
    CONNECTION0_SYNAPSE1_L,
};

// connection0_synapse1 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse1States state;
} Connection0Synapse1;

// connection0_synapse1 Initialisation function
void Connection0Synapse1Init(Connection0Synapse1* me);

// connection0_synapse1 Execution function
void Connection0Synapse1Run(Connection0Synapse1* me);

#endif // CONNECTION0_SYNAPSE1_H_