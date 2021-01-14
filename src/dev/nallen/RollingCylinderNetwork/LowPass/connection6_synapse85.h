#ifndef CONNECTION6_SYNAPSE85_H_
#define CONNECTION6_SYNAPSE85_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse85 States
enum Connection6Synapse85States {
    CONNECTION6_SYNAPSE85_L,
};

// connection6_synapse85 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse85States state;
} Connection6Synapse85;

// connection6_synapse85 Initialisation function
void Connection6Synapse85Init(Connection6Synapse85* me);

// connection6_synapse85 Execution function
void Connection6Synapse85Run(Connection6Synapse85* me);

#endif // CONNECTION6_SYNAPSE85_H_