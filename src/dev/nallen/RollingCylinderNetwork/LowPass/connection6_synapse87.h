#ifndef CONNECTION6_SYNAPSE87_H_
#define CONNECTION6_SYNAPSE87_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse87 States
enum Connection6Synapse87States {
    CONNECTION6_SYNAPSE87_L,
};

// connection6_synapse87 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse87States state;
} Connection6Synapse87;

// connection6_synapse87 Initialisation function
void Connection6Synapse87Init(Connection6Synapse87* me);

// connection6_synapse87 Execution function
void Connection6Synapse87Run(Connection6Synapse87* me);

#endif // CONNECTION6_SYNAPSE87_H_