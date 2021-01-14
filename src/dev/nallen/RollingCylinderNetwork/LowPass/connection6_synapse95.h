#ifndef CONNECTION6_SYNAPSE95_H_
#define CONNECTION6_SYNAPSE95_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse95 States
enum Connection6Synapse95States {
    CONNECTION6_SYNAPSE95_L,
};

// connection6_synapse95 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse95States state;
} Connection6Synapse95;

// connection6_synapse95 Initialisation function
void Connection6Synapse95Init(Connection6Synapse95* me);

// connection6_synapse95 Execution function
void Connection6Synapse95Run(Connection6Synapse95* me);

#endif // CONNECTION6_SYNAPSE95_H_