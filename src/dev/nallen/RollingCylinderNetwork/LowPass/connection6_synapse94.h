#ifndef CONNECTION6_SYNAPSE94_H_
#define CONNECTION6_SYNAPSE94_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse94 States
enum Connection6Synapse94States {
    CONNECTION6_SYNAPSE94_L,
};

// connection6_synapse94 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse94States state;
} Connection6Synapse94;

// connection6_synapse94 Initialisation function
void Connection6Synapse94Init(Connection6Synapse94* me);

// connection6_synapse94 Execution function
void Connection6Synapse94Run(Connection6Synapse94* me);

#endif // CONNECTION6_SYNAPSE94_H_