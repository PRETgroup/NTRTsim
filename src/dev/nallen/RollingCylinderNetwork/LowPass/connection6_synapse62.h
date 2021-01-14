#ifndef CONNECTION6_SYNAPSE62_H_
#define CONNECTION6_SYNAPSE62_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse62 States
enum Connection6Synapse62States {
    CONNECTION6_SYNAPSE62_L,
};

// connection6_synapse62 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse62States state;
} Connection6Synapse62;

// connection6_synapse62 Initialisation function
void Connection6Synapse62Init(Connection6Synapse62* me);

// connection6_synapse62 Execution function
void Connection6Synapse62Run(Connection6Synapse62* me);

#endif // CONNECTION6_SYNAPSE62_H_