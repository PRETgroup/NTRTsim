#ifndef CONNECTION6_SYNAPSE58_H_
#define CONNECTION6_SYNAPSE58_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse58 States
enum Connection6Synapse58States {
    CONNECTION6_SYNAPSE58_L,
};

// connection6_synapse58 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse58States state;
} Connection6Synapse58;

// connection6_synapse58 Initialisation function
void Connection6Synapse58Init(Connection6Synapse58* me);

// connection6_synapse58 Execution function
void Connection6Synapse58Run(Connection6Synapse58* me);

#endif // CONNECTION6_SYNAPSE58_H_