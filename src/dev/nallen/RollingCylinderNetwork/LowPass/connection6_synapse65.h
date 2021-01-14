#ifndef CONNECTION6_SYNAPSE65_H_
#define CONNECTION6_SYNAPSE65_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse65 States
enum Connection6Synapse65States {
    CONNECTION6_SYNAPSE65_L,
};

// connection6_synapse65 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse65States state;
} Connection6Synapse65;

// connection6_synapse65 Initialisation function
void Connection6Synapse65Init(Connection6Synapse65* me);

// connection6_synapse65 Execution function
void Connection6Synapse65Run(Connection6Synapse65* me);

#endif // CONNECTION6_SYNAPSE65_H_