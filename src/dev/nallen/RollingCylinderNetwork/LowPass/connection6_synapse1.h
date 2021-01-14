#ifndef CONNECTION6_SYNAPSE1_H_
#define CONNECTION6_SYNAPSE1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse1 States
enum Connection6Synapse1States {
    CONNECTION6_SYNAPSE1_L,
};

// connection6_synapse1 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse1States state;
} Connection6Synapse1;

// connection6_synapse1 Initialisation function
void Connection6Synapse1Init(Connection6Synapse1* me);

// connection6_synapse1 Execution function
void Connection6Synapse1Run(Connection6Synapse1* me);

#endif // CONNECTION6_SYNAPSE1_H_