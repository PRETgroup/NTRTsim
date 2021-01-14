#ifndef CONNECTION6_SYNAPSE29_H_
#define CONNECTION6_SYNAPSE29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse29 States
enum Connection6Synapse29States {
    CONNECTION6_SYNAPSE29_L,
};

// connection6_synapse29 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse29States state;
} Connection6Synapse29;

// connection6_synapse29 Initialisation function
void Connection6Synapse29Init(Connection6Synapse29* me);

// connection6_synapse29 Execution function
void Connection6Synapse29Run(Connection6Synapse29* me);

#endif // CONNECTION6_SYNAPSE29_H_