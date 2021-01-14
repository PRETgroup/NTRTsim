#ifndef CONNECTION6_SYNAPSE92_H_
#define CONNECTION6_SYNAPSE92_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse92 States
enum Connection6Synapse92States {
    CONNECTION6_SYNAPSE92_L,
};

// connection6_synapse92 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse92States state;
} Connection6Synapse92;

// connection6_synapse92 Initialisation function
void Connection6Synapse92Init(Connection6Synapse92* me);

// connection6_synapse92 Execution function
void Connection6Synapse92Run(Connection6Synapse92* me);

#endif // CONNECTION6_SYNAPSE92_H_