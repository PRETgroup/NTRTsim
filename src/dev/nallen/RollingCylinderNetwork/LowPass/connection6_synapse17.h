#ifndef CONNECTION6_SYNAPSE17_H_
#define CONNECTION6_SYNAPSE17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse17 States
enum Connection6Synapse17States {
    CONNECTION6_SYNAPSE17_L,
};

// connection6_synapse17 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse17States state;
} Connection6Synapse17;

// connection6_synapse17 Initialisation function
void Connection6Synapse17Init(Connection6Synapse17* me);

// connection6_synapse17 Execution function
void Connection6Synapse17Run(Connection6Synapse17* me);

#endif // CONNECTION6_SYNAPSE17_H_