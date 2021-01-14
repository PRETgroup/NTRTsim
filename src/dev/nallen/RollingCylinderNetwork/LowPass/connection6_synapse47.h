#ifndef CONNECTION6_SYNAPSE47_H_
#define CONNECTION6_SYNAPSE47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse47 States
enum Connection6Synapse47States {
    CONNECTION6_SYNAPSE47_L,
};

// connection6_synapse47 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse47States state;
} Connection6Synapse47;

// connection6_synapse47 Initialisation function
void Connection6Synapse47Init(Connection6Synapse47* me);

// connection6_synapse47 Execution function
void Connection6Synapse47Run(Connection6Synapse47* me);

#endif // CONNECTION6_SYNAPSE47_H_