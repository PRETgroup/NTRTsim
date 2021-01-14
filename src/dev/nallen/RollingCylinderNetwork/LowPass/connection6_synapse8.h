#ifndef CONNECTION6_SYNAPSE8_H_
#define CONNECTION6_SYNAPSE8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse8 States
enum Connection6Synapse8States {
    CONNECTION6_SYNAPSE8_L,
};

// connection6_synapse8 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse8States state;
} Connection6Synapse8;

// connection6_synapse8 Initialisation function
void Connection6Synapse8Init(Connection6Synapse8* me);

// connection6_synapse8 Execution function
void Connection6Synapse8Run(Connection6Synapse8* me);

#endif // CONNECTION6_SYNAPSE8_H_