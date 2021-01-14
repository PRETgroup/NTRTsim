#ifndef CONNECTION6_SYNAPSE90_H_
#define CONNECTION6_SYNAPSE90_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse90 States
enum Connection6Synapse90States {
    CONNECTION6_SYNAPSE90_L,
};

// connection6_synapse90 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse90States state;
} Connection6Synapse90;

// connection6_synapse90 Initialisation function
void Connection6Synapse90Init(Connection6Synapse90* me);

// connection6_synapse90 Execution function
void Connection6Synapse90Run(Connection6Synapse90* me);

#endif // CONNECTION6_SYNAPSE90_H_