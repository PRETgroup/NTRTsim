#ifndef CONNECTION6_SYNAPSE77_H_
#define CONNECTION6_SYNAPSE77_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse77 States
enum Connection6Synapse77States {
    CONNECTION6_SYNAPSE77_L,
};

// connection6_synapse77 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse77States state;
} Connection6Synapse77;

// connection6_synapse77 Initialisation function
void Connection6Synapse77Init(Connection6Synapse77* me);

// connection6_synapse77 Execution function
void Connection6Synapse77Run(Connection6Synapse77* me);

#endif // CONNECTION6_SYNAPSE77_H_