#ifndef CONNECTION6_SYNAPSE74_H_
#define CONNECTION6_SYNAPSE74_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse74 States
enum Connection6Synapse74States {
    CONNECTION6_SYNAPSE74_L,
};

// connection6_synapse74 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse74States state;
} Connection6Synapse74;

// connection6_synapse74 Initialisation function
void Connection6Synapse74Init(Connection6Synapse74* me);

// connection6_synapse74 Execution function
void Connection6Synapse74Run(Connection6Synapse74* me);

#endif // CONNECTION6_SYNAPSE74_H_