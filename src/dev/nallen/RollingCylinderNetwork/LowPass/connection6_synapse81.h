#ifndef CONNECTION6_SYNAPSE81_H_
#define CONNECTION6_SYNAPSE81_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse81 States
enum Connection6Synapse81States {
    CONNECTION6_SYNAPSE81_L,
};

// connection6_synapse81 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse81States state;
} Connection6Synapse81;

// connection6_synapse81 Initialisation function
void Connection6Synapse81Init(Connection6Synapse81* me);

// connection6_synapse81 Execution function
void Connection6Synapse81Run(Connection6Synapse81* me);

#endif // CONNECTION6_SYNAPSE81_H_