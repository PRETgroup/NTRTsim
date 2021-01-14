#ifndef CONNECTION6_SYNAPSE46_H_
#define CONNECTION6_SYNAPSE46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse46 States
enum Connection6Synapse46States {
    CONNECTION6_SYNAPSE46_L,
};

// connection6_synapse46 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse46States state;
} Connection6Synapse46;

// connection6_synapse46 Initialisation function
void Connection6Synapse46Init(Connection6Synapse46* me);

// connection6_synapse46 Execution function
void Connection6Synapse46Run(Connection6Synapse46* me);

#endif // CONNECTION6_SYNAPSE46_H_