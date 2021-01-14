#ifndef CONNECTION6_SYNAPSE72_H_
#define CONNECTION6_SYNAPSE72_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse72 States
enum Connection6Synapse72States {
    CONNECTION6_SYNAPSE72_L,
};

// connection6_synapse72 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse72States state;
} Connection6Synapse72;

// connection6_synapse72 Initialisation function
void Connection6Synapse72Init(Connection6Synapse72* me);

// connection6_synapse72 Execution function
void Connection6Synapse72Run(Connection6Synapse72* me);

#endif // CONNECTION6_SYNAPSE72_H_