#ifndef CONNECTION6_SYNAPSE27_H_
#define CONNECTION6_SYNAPSE27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse27 States
enum Connection6Synapse27States {
    CONNECTION6_SYNAPSE27_L,
};

// connection6_synapse27 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse27States state;
} Connection6Synapse27;

// connection6_synapse27 Initialisation function
void Connection6Synapse27Init(Connection6Synapse27* me);

// connection6_synapse27 Execution function
void Connection6Synapse27Run(Connection6Synapse27* me);

#endif // CONNECTION6_SYNAPSE27_H_