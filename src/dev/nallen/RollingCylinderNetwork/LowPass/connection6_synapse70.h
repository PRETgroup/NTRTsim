#ifndef CONNECTION6_SYNAPSE70_H_
#define CONNECTION6_SYNAPSE70_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse70 States
enum Connection6Synapse70States {
    CONNECTION6_SYNAPSE70_L,
};

// connection6_synapse70 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse70States state;
} Connection6Synapse70;

// connection6_synapse70 Initialisation function
void Connection6Synapse70Init(Connection6Synapse70* me);

// connection6_synapse70 Execution function
void Connection6Synapse70Run(Connection6Synapse70* me);

#endif // CONNECTION6_SYNAPSE70_H_