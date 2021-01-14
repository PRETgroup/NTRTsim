#ifndef CONNECTION6_SYNAPSE44_H_
#define CONNECTION6_SYNAPSE44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse44 States
enum Connection6Synapse44States {
    CONNECTION6_SYNAPSE44_L,
};

// connection6_synapse44 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse44States state;
} Connection6Synapse44;

// connection6_synapse44 Initialisation function
void Connection6Synapse44Init(Connection6Synapse44* me);

// connection6_synapse44 Execution function
void Connection6Synapse44Run(Connection6Synapse44* me);

#endif // CONNECTION6_SYNAPSE44_H_