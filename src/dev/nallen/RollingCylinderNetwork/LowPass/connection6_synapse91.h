#ifndef CONNECTION6_SYNAPSE91_H_
#define CONNECTION6_SYNAPSE91_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse91 States
enum Connection6Synapse91States {
    CONNECTION6_SYNAPSE91_L,
};

// connection6_synapse91 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse91States state;
} Connection6Synapse91;

// connection6_synapse91 Initialisation function
void Connection6Synapse91Init(Connection6Synapse91* me);

// connection6_synapse91 Execution function
void Connection6Synapse91Run(Connection6Synapse91* me);

#endif // CONNECTION6_SYNAPSE91_H_