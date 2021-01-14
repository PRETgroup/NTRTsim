#ifndef CONNECTION6_SYNAPSE6_H_
#define CONNECTION6_SYNAPSE6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse6 States
enum Connection6Synapse6States {
    CONNECTION6_SYNAPSE6_L,
};

// connection6_synapse6 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse6States state;
} Connection6Synapse6;

// connection6_synapse6 Initialisation function
void Connection6Synapse6Init(Connection6Synapse6* me);

// connection6_synapse6 Execution function
void Connection6Synapse6Run(Connection6Synapse6* me);

#endif // CONNECTION6_SYNAPSE6_H_