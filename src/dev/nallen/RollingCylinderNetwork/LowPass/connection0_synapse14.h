#ifndef CONNECTION0_SYNAPSE14_H_
#define CONNECTION0_SYNAPSE14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse14 States
enum Connection0Synapse14States {
    CONNECTION0_SYNAPSE14_L,
};

// connection0_synapse14 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse14States state;
} Connection0Synapse14;

// connection0_synapse14 Initialisation function
void Connection0Synapse14Init(Connection0Synapse14* me);

// connection0_synapse14 Execution function
void Connection0Synapse14Run(Connection0Synapse14* me);

#endif // CONNECTION0_SYNAPSE14_H_