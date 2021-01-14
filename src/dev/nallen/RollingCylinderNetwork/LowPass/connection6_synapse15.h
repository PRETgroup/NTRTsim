#ifndef CONNECTION6_SYNAPSE15_H_
#define CONNECTION6_SYNAPSE15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse15 States
enum Connection6Synapse15States {
    CONNECTION6_SYNAPSE15_L,
};

// connection6_synapse15 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse15States state;
} Connection6Synapse15;

// connection6_synapse15 Initialisation function
void Connection6Synapse15Init(Connection6Synapse15* me);

// connection6_synapse15 Execution function
void Connection6Synapse15Run(Connection6Synapse15* me);

#endif // CONNECTION6_SYNAPSE15_H_