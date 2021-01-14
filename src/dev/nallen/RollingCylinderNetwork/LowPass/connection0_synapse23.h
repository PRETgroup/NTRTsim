#ifndef CONNECTION0_SYNAPSE23_H_
#define CONNECTION0_SYNAPSE23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse23 States
enum Connection0Synapse23States {
    CONNECTION0_SYNAPSE23_L,
};

// connection0_synapse23 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse23States state;
} Connection0Synapse23;

// connection0_synapse23 Initialisation function
void Connection0Synapse23Init(Connection0Synapse23* me);

// connection0_synapse23 Execution function
void Connection0Synapse23Run(Connection0Synapse23* me);

#endif // CONNECTION0_SYNAPSE23_H_