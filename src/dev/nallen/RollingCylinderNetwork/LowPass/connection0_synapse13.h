#ifndef CONNECTION0_SYNAPSE13_H_
#define CONNECTION0_SYNAPSE13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse13 States
enum Connection0Synapse13States {
    CONNECTION0_SYNAPSE13_L,
};

// connection0_synapse13 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse13States state;
} Connection0Synapse13;

// connection0_synapse13 Initialisation function
void Connection0Synapse13Init(Connection0Synapse13* me);

// connection0_synapse13 Execution function
void Connection0Synapse13Run(Connection0Synapse13* me);

#endif // CONNECTION0_SYNAPSE13_H_