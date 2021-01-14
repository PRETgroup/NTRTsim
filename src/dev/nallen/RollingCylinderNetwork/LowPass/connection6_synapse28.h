#ifndef CONNECTION6_SYNAPSE28_H_
#define CONNECTION6_SYNAPSE28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse28 States
enum Connection6Synapse28States {
    CONNECTION6_SYNAPSE28_L,
};

// connection6_synapse28 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse28States state;
} Connection6Synapse28;

// connection6_synapse28 Initialisation function
void Connection6Synapse28Init(Connection6Synapse28* me);

// connection6_synapse28 Execution function
void Connection6Synapse28Run(Connection6Synapse28* me);

#endif // CONNECTION6_SYNAPSE28_H_