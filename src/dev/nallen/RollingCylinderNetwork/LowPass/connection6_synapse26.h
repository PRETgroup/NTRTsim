#ifndef CONNECTION6_SYNAPSE26_H_
#define CONNECTION6_SYNAPSE26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse26 States
enum Connection6Synapse26States {
    CONNECTION6_SYNAPSE26_L,
};

// connection6_synapse26 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse26States state;
} Connection6Synapse26;

// connection6_synapse26 Initialisation function
void Connection6Synapse26Init(Connection6Synapse26* me);

// connection6_synapse26 Execution function
void Connection6Synapse26Run(Connection6Synapse26* me);

#endif // CONNECTION6_SYNAPSE26_H_