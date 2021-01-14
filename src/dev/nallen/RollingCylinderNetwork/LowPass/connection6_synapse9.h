#ifndef CONNECTION6_SYNAPSE9_H_
#define CONNECTION6_SYNAPSE9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse9 States
enum Connection6Synapse9States {
    CONNECTION6_SYNAPSE9_L,
};

// connection6_synapse9 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse9States state;
} Connection6Synapse9;

// connection6_synapse9 Initialisation function
void Connection6Synapse9Init(Connection6Synapse9* me);

// connection6_synapse9 Execution function
void Connection6Synapse9Run(Connection6Synapse9* me);

#endif // CONNECTION6_SYNAPSE9_H_