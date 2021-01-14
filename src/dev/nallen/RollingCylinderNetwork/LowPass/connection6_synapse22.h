#ifndef CONNECTION6_SYNAPSE22_H_
#define CONNECTION6_SYNAPSE22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse22 States
enum Connection6Synapse22States {
    CONNECTION6_SYNAPSE22_L,
};

// connection6_synapse22 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse22States state;
} Connection6Synapse22;

// connection6_synapse22 Initialisation function
void Connection6Synapse22Init(Connection6Synapse22* me);

// connection6_synapse22 Execution function
void Connection6Synapse22Run(Connection6Synapse22* me);

#endif // CONNECTION6_SYNAPSE22_H_