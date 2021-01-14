#ifndef CONNECTION6_SYNAPSE36_H_
#define CONNECTION6_SYNAPSE36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse36 States
enum Connection6Synapse36States {
    CONNECTION6_SYNAPSE36_L,
};

// connection6_synapse36 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse36States state;
} Connection6Synapse36;

// connection6_synapse36 Initialisation function
void Connection6Synapse36Init(Connection6Synapse36* me);

// connection6_synapse36 Execution function
void Connection6Synapse36Run(Connection6Synapse36* me);

#endif // CONNECTION6_SYNAPSE36_H_