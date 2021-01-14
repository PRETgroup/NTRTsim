#ifndef CONNECTION6_SYNAPSE23_H_
#define CONNECTION6_SYNAPSE23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse23 States
enum Connection6Synapse23States {
    CONNECTION6_SYNAPSE23_L,
};

// connection6_synapse23 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse23States state;
} Connection6Synapse23;

// connection6_synapse23 Initialisation function
void Connection6Synapse23Init(Connection6Synapse23* me);

// connection6_synapse23 Execution function
void Connection6Synapse23Run(Connection6Synapse23* me);

#endif // CONNECTION6_SYNAPSE23_H_