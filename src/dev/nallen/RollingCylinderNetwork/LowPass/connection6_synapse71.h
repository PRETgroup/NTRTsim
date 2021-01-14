#ifndef CONNECTION6_SYNAPSE71_H_
#define CONNECTION6_SYNAPSE71_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse71 States
enum Connection6Synapse71States {
    CONNECTION6_SYNAPSE71_L,
};

// connection6_synapse71 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse71States state;
} Connection6Synapse71;

// connection6_synapse71 Initialisation function
void Connection6Synapse71Init(Connection6Synapse71* me);

// connection6_synapse71 Execution function
void Connection6Synapse71Run(Connection6Synapse71* me);

#endif // CONNECTION6_SYNAPSE71_H_