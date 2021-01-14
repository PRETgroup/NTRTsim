#ifndef CONNECTION0_SYNAPSE19_H_
#define CONNECTION0_SYNAPSE19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse19 States
enum Connection0Synapse19States {
    CONNECTION0_SYNAPSE19_L,
};

// connection0_synapse19 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse19States state;
} Connection0Synapse19;

// connection0_synapse19 Initialisation function
void Connection0Synapse19Init(Connection0Synapse19* me);

// connection0_synapse19 Execution function
void Connection0Synapse19Run(Connection0Synapse19* me);

#endif // CONNECTION0_SYNAPSE19_H_