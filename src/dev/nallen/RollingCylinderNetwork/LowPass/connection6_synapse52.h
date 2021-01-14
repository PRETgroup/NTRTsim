#ifndef CONNECTION6_SYNAPSE52_H_
#define CONNECTION6_SYNAPSE52_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse52 States
enum Connection6Synapse52States {
    CONNECTION6_SYNAPSE52_L,
};

// connection6_synapse52 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse52States state;
} Connection6Synapse52;

// connection6_synapse52 Initialisation function
void Connection6Synapse52Init(Connection6Synapse52* me);

// connection6_synapse52 Execution function
void Connection6Synapse52Run(Connection6Synapse52* me);

#endif // CONNECTION6_SYNAPSE52_H_