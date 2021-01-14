#ifndef CONNECTION6_SYNAPSE59_H_
#define CONNECTION6_SYNAPSE59_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse59 States
enum Connection6Synapse59States {
    CONNECTION6_SYNAPSE59_L,
};

// connection6_synapse59 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse59States state;
} Connection6Synapse59;

// connection6_synapse59 Initialisation function
void Connection6Synapse59Init(Connection6Synapse59* me);

// connection6_synapse59 Execution function
void Connection6Synapse59Run(Connection6Synapse59* me);

#endif // CONNECTION6_SYNAPSE59_H_