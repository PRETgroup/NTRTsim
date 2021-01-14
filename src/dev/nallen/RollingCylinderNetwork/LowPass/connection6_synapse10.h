#ifndef CONNECTION6_SYNAPSE10_H_
#define CONNECTION6_SYNAPSE10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse10 States
enum Connection6Synapse10States {
    CONNECTION6_SYNAPSE10_L,
};

// connection6_synapse10 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse10States state;
} Connection6Synapse10;

// connection6_synapse10 Initialisation function
void Connection6Synapse10Init(Connection6Synapse10* me);

// connection6_synapse10 Execution function
void Connection6Synapse10Run(Connection6Synapse10* me);

#endif // CONNECTION6_SYNAPSE10_H_