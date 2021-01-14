#ifndef CONNECTION6_SYNAPSE42_H_
#define CONNECTION6_SYNAPSE42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse42 States
enum Connection6Synapse42States {
    CONNECTION6_SYNAPSE42_L,
};

// connection6_synapse42 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse42States state;
} Connection6Synapse42;

// connection6_synapse42 Initialisation function
void Connection6Synapse42Init(Connection6Synapse42* me);

// connection6_synapse42 Execution function
void Connection6Synapse42Run(Connection6Synapse42* me);

#endif // CONNECTION6_SYNAPSE42_H_