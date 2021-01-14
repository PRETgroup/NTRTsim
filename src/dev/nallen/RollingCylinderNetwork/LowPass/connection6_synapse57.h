#ifndef CONNECTION6_SYNAPSE57_H_
#define CONNECTION6_SYNAPSE57_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse57 States
enum Connection6Synapse57States {
    CONNECTION6_SYNAPSE57_L,
};

// connection6_synapse57 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse57States state;
} Connection6Synapse57;

// connection6_synapse57 Initialisation function
void Connection6Synapse57Init(Connection6Synapse57* me);

// connection6_synapse57 Execution function
void Connection6Synapse57Run(Connection6Synapse57* me);

#endif // CONNECTION6_SYNAPSE57_H_