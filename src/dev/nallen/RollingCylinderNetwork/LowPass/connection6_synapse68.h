#ifndef CONNECTION6_SYNAPSE68_H_
#define CONNECTION6_SYNAPSE68_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse68 States
enum Connection6Synapse68States {
    CONNECTION6_SYNAPSE68_L,
};

// connection6_synapse68 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse68States state;
} Connection6Synapse68;

// connection6_synapse68 Initialisation function
void Connection6Synapse68Init(Connection6Synapse68* me);

// connection6_synapse68 Execution function
void Connection6Synapse68Run(Connection6Synapse68* me);

#endif // CONNECTION6_SYNAPSE68_H_