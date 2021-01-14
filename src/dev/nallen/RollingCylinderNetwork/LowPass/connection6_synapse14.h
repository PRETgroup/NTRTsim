#ifndef CONNECTION6_SYNAPSE14_H_
#define CONNECTION6_SYNAPSE14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse14 States
enum Connection6Synapse14States {
    CONNECTION6_SYNAPSE14_L,
};

// connection6_synapse14 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse14States state;
} Connection6Synapse14;

// connection6_synapse14 Initialisation function
void Connection6Synapse14Init(Connection6Synapse14* me);

// connection6_synapse14 Execution function
void Connection6Synapse14Run(Connection6Synapse14* me);

#endif // CONNECTION6_SYNAPSE14_H_