#ifndef CONNECTION6_SYNAPSE45_H_
#define CONNECTION6_SYNAPSE45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse45 States
enum Connection6Synapse45States {
    CONNECTION6_SYNAPSE45_L,
};

// connection6_synapse45 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse45States state;
} Connection6Synapse45;

// connection6_synapse45 Initialisation function
void Connection6Synapse45Init(Connection6Synapse45* me);

// connection6_synapse45 Execution function
void Connection6Synapse45Run(Connection6Synapse45* me);

#endif // CONNECTION6_SYNAPSE45_H_