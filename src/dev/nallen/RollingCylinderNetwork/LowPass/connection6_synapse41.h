#ifndef CONNECTION6_SYNAPSE41_H_
#define CONNECTION6_SYNAPSE41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse41 States
enum Connection6Synapse41States {
    CONNECTION6_SYNAPSE41_L,
};

// connection6_synapse41 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse41States state;
} Connection6Synapse41;

// connection6_synapse41 Initialisation function
void Connection6Synapse41Init(Connection6Synapse41* me);

// connection6_synapse41 Execution function
void Connection6Synapse41Run(Connection6Synapse41* me);

#endif // CONNECTION6_SYNAPSE41_H_