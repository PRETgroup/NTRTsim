#ifndef CONNECTION6_SYNAPSE24_H_
#define CONNECTION6_SYNAPSE24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse24 States
enum Connection6Synapse24States {
    CONNECTION6_SYNAPSE24_L,
};

// connection6_synapse24 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse24States state;
} Connection6Synapse24;

// connection6_synapse24 Initialisation function
void Connection6Synapse24Init(Connection6Synapse24* me);

// connection6_synapse24 Execution function
void Connection6Synapse24Run(Connection6Synapse24* me);

#endif // CONNECTION6_SYNAPSE24_H_