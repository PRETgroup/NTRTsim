#ifndef CONNECTION6_SYNAPSE76_H_
#define CONNECTION6_SYNAPSE76_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse76 States
enum Connection6Synapse76States {
    CONNECTION6_SYNAPSE76_L,
};

// connection6_synapse76 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse76States state;
} Connection6Synapse76;

// connection6_synapse76 Initialisation function
void Connection6Synapse76Init(Connection6Synapse76* me);

// connection6_synapse76 Execution function
void Connection6Synapse76Run(Connection6Synapse76* me);

#endif // CONNECTION6_SYNAPSE76_H_