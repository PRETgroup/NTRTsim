#ifndef CONNECTION6_SYNAPSE19_H_
#define CONNECTION6_SYNAPSE19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse19 States
enum Connection6Synapse19States {
    CONNECTION6_SYNAPSE19_L,
};

// connection6_synapse19 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse19States state;
} Connection6Synapse19;

// connection6_synapse19 Initialisation function
void Connection6Synapse19Init(Connection6Synapse19* me);

// connection6_synapse19 Execution function
void Connection6Synapse19Run(Connection6Synapse19* me);

#endif // CONNECTION6_SYNAPSE19_H_