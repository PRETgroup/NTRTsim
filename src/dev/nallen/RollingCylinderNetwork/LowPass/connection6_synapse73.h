#ifndef CONNECTION6_SYNAPSE73_H_
#define CONNECTION6_SYNAPSE73_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse73 States
enum Connection6Synapse73States {
    CONNECTION6_SYNAPSE73_L,
};

// connection6_synapse73 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse73States state;
} Connection6Synapse73;

// connection6_synapse73 Initialisation function
void Connection6Synapse73Init(Connection6Synapse73* me);

// connection6_synapse73 Execution function
void Connection6Synapse73Run(Connection6Synapse73* me);

#endif // CONNECTION6_SYNAPSE73_H_