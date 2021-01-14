#ifndef CONNECTION6_SYNAPSE93_H_
#define CONNECTION6_SYNAPSE93_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse93 States
enum Connection6Synapse93States {
    CONNECTION6_SYNAPSE93_L,
};

// connection6_synapse93 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse93States state;
} Connection6Synapse93;

// connection6_synapse93 Initialisation function
void Connection6Synapse93Init(Connection6Synapse93* me);

// connection6_synapse93 Execution function
void Connection6Synapse93Run(Connection6Synapse93* me);

#endif // CONNECTION6_SYNAPSE93_H_