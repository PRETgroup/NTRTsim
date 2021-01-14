#ifndef CONNECTION6_SYNAPSE43_H_
#define CONNECTION6_SYNAPSE43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse43 States
enum Connection6Synapse43States {
    CONNECTION6_SYNAPSE43_L,
};

// connection6_synapse43 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse43States state;
} Connection6Synapse43;

// connection6_synapse43 Initialisation function
void Connection6Synapse43Init(Connection6Synapse43* me);

// connection6_synapse43 Execution function
void Connection6Synapse43Run(Connection6Synapse43* me);

#endif // CONNECTION6_SYNAPSE43_H_