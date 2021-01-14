#ifndef CONNECTION6_SYNAPSE4_H_
#define CONNECTION6_SYNAPSE4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse4 States
enum Connection6Synapse4States {
    CONNECTION6_SYNAPSE4_L,
};

// connection6_synapse4 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse4States state;
} Connection6Synapse4;

// connection6_synapse4 Initialisation function
void Connection6Synapse4Init(Connection6Synapse4* me);

// connection6_synapse4 Execution function
void Connection6Synapse4Run(Connection6Synapse4* me);

#endif // CONNECTION6_SYNAPSE4_H_