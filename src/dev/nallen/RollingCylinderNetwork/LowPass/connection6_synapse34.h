#ifndef CONNECTION6_SYNAPSE34_H_
#define CONNECTION6_SYNAPSE34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse34 States
enum Connection6Synapse34States {
    CONNECTION6_SYNAPSE34_L,
};

// connection6_synapse34 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse34States state;
} Connection6Synapse34;

// connection6_synapse34 Initialisation function
void Connection6Synapse34Init(Connection6Synapse34* me);

// connection6_synapse34 Execution function
void Connection6Synapse34Run(Connection6Synapse34* me);

#endif // CONNECTION6_SYNAPSE34_H_