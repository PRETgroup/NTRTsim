#ifndef CONNECTION6_SYNAPSE61_H_
#define CONNECTION6_SYNAPSE61_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse61 States
enum Connection6Synapse61States {
    CONNECTION6_SYNAPSE61_L,
};

// connection6_synapse61 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse61States state;
} Connection6Synapse61;

// connection6_synapse61 Initialisation function
void Connection6Synapse61Init(Connection6Synapse61* me);

// connection6_synapse61 Execution function
void Connection6Synapse61Run(Connection6Synapse61* me);

#endif // CONNECTION6_SYNAPSE61_H_