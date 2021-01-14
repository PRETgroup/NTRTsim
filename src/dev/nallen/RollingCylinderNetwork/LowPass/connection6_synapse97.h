#ifndef CONNECTION6_SYNAPSE97_H_
#define CONNECTION6_SYNAPSE97_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse97 States
enum Connection6Synapse97States {
    CONNECTION6_SYNAPSE97_L,
};

// connection6_synapse97 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse97States state;
} Connection6Synapse97;

// connection6_synapse97 Initialisation function
void Connection6Synapse97Init(Connection6Synapse97* me);

// connection6_synapse97 Execution function
void Connection6Synapse97Run(Connection6Synapse97* me);

#endif // CONNECTION6_SYNAPSE97_H_