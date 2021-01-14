#ifndef CONNECTION6_SYNAPSE3_H_
#define CONNECTION6_SYNAPSE3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse3 States
enum Connection6Synapse3States {
    CONNECTION6_SYNAPSE3_L,
};

// connection6_synapse3 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse3States state;
} Connection6Synapse3;

// connection6_synapse3 Initialisation function
void Connection6Synapse3Init(Connection6Synapse3* me);

// connection6_synapse3 Execution function
void Connection6Synapse3Run(Connection6Synapse3* me);

#endif // CONNECTION6_SYNAPSE3_H_