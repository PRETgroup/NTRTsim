#ifndef CONNECTION6_SYNAPSE63_H_
#define CONNECTION6_SYNAPSE63_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse63 States
enum Connection6Synapse63States {
    CONNECTION6_SYNAPSE63_L,
};

// connection6_synapse63 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse63States state;
} Connection6Synapse63;

// connection6_synapse63 Initialisation function
void Connection6Synapse63Init(Connection6Synapse63* me);

// connection6_synapse63 Execution function
void Connection6Synapse63Run(Connection6Synapse63* me);

#endif // CONNECTION6_SYNAPSE63_H_