#ifndef CONNECTION6_SYNAPSE67_H_
#define CONNECTION6_SYNAPSE67_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse67 States
enum Connection6Synapse67States {
    CONNECTION6_SYNAPSE67_L,
};

// connection6_synapse67 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse67States state;
} Connection6Synapse67;

// connection6_synapse67 Initialisation function
void Connection6Synapse67Init(Connection6Synapse67* me);

// connection6_synapse67 Execution function
void Connection6Synapse67Run(Connection6Synapse67* me);

#endif // CONNECTION6_SYNAPSE67_H_