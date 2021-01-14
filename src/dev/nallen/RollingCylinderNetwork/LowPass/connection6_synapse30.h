#ifndef CONNECTION6_SYNAPSE30_H_
#define CONNECTION6_SYNAPSE30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse30 States
enum Connection6Synapse30States {
    CONNECTION6_SYNAPSE30_L,
};

// connection6_synapse30 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse30States state;
} Connection6Synapse30;

// connection6_synapse30 Initialisation function
void Connection6Synapse30Init(Connection6Synapse30* me);

// connection6_synapse30 Execution function
void Connection6Synapse30Run(Connection6Synapse30* me);

#endif // CONNECTION6_SYNAPSE30_H_