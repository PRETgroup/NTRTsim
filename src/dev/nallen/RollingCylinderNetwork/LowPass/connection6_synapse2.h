#ifndef CONNECTION6_SYNAPSE2_H_
#define CONNECTION6_SYNAPSE2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse2 States
enum Connection6Synapse2States {
    CONNECTION6_SYNAPSE2_L,
};

// connection6_synapse2 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse2States state;
} Connection6Synapse2;

// connection6_synapse2 Initialisation function
void Connection6Synapse2Init(Connection6Synapse2* me);

// connection6_synapse2 Execution function
void Connection6Synapse2Run(Connection6Synapse2* me);

#endif // CONNECTION6_SYNAPSE2_H_