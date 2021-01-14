#ifndef CONNECTION6_SYNAPSE75_H_
#define CONNECTION6_SYNAPSE75_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse75 States
enum Connection6Synapse75States {
    CONNECTION6_SYNAPSE75_L,
};

// connection6_synapse75 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse75States state;
} Connection6Synapse75;

// connection6_synapse75 Initialisation function
void Connection6Synapse75Init(Connection6Synapse75* me);

// connection6_synapse75 Execution function
void Connection6Synapse75Run(Connection6Synapse75* me);

#endif // CONNECTION6_SYNAPSE75_H_