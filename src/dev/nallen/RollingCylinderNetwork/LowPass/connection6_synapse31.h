#ifndef CONNECTION6_SYNAPSE31_H_
#define CONNECTION6_SYNAPSE31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse31 States
enum Connection6Synapse31States {
    CONNECTION6_SYNAPSE31_L,
};

// connection6_synapse31 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse31States state;
} Connection6Synapse31;

// connection6_synapse31 Initialisation function
void Connection6Synapse31Init(Connection6Synapse31* me);

// connection6_synapse31 Execution function
void Connection6Synapse31Run(Connection6Synapse31* me);

#endif // CONNECTION6_SYNAPSE31_H_