#ifndef CONNECTION6_SYNAPSE40_H_
#define CONNECTION6_SYNAPSE40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse40 States
enum Connection6Synapse40States {
    CONNECTION6_SYNAPSE40_L,
};

// connection6_synapse40 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse40States state;
} Connection6Synapse40;

// connection6_synapse40 Initialisation function
void Connection6Synapse40Init(Connection6Synapse40* me);

// connection6_synapse40 Execution function
void Connection6Synapse40Run(Connection6Synapse40* me);

#endif // CONNECTION6_SYNAPSE40_H_