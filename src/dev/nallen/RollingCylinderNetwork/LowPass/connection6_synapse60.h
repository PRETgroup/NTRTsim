#ifndef CONNECTION6_SYNAPSE60_H_
#define CONNECTION6_SYNAPSE60_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse60 States
enum Connection6Synapse60States {
    CONNECTION6_SYNAPSE60_L,
};

// connection6_synapse60 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse60States state;
} Connection6Synapse60;

// connection6_synapse60 Initialisation function
void Connection6Synapse60Init(Connection6Synapse60* me);

// connection6_synapse60 Execution function
void Connection6Synapse60Run(Connection6Synapse60* me);

#endif // CONNECTION6_SYNAPSE60_H_