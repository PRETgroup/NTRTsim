#ifndef CONNECTION6_SYNAPSE53_H_
#define CONNECTION6_SYNAPSE53_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse53 States
enum Connection6Synapse53States {
    CONNECTION6_SYNAPSE53_L,
};

// connection6_synapse53 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse53States state;
} Connection6Synapse53;

// connection6_synapse53 Initialisation function
void Connection6Synapse53Init(Connection6Synapse53* me);

// connection6_synapse53 Execution function
void Connection6Synapse53Run(Connection6Synapse53* me);

#endif // CONNECTION6_SYNAPSE53_H_