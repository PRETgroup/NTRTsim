#ifndef CONNECTION6_SYNAPSE80_H_
#define CONNECTION6_SYNAPSE80_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse80 States
enum Connection6Synapse80States {
    CONNECTION6_SYNAPSE80_L,
};

// connection6_synapse80 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse80States state;
} Connection6Synapse80;

// connection6_synapse80 Initialisation function
void Connection6Synapse80Init(Connection6Synapse80* me);

// connection6_synapse80 Execution function
void Connection6Synapse80Run(Connection6Synapse80* me);

#endif // CONNECTION6_SYNAPSE80_H_