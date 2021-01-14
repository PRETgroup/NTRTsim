#ifndef CONNECTION6_SYNAPSE55_H_
#define CONNECTION6_SYNAPSE55_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse55 States
enum Connection6Synapse55States {
    CONNECTION6_SYNAPSE55_L,
};

// connection6_synapse55 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse55States state;
} Connection6Synapse55;

// connection6_synapse55 Initialisation function
void Connection6Synapse55Init(Connection6Synapse55* me);

// connection6_synapse55 Execution function
void Connection6Synapse55Run(Connection6Synapse55* me);

#endif // CONNECTION6_SYNAPSE55_H_