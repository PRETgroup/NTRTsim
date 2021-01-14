#ifndef CONNECTION6_SYNAPSE18_H_
#define CONNECTION6_SYNAPSE18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse18 States
enum Connection6Synapse18States {
    CONNECTION6_SYNAPSE18_L,
};

// connection6_synapse18 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse18States state;
} Connection6Synapse18;

// connection6_synapse18 Initialisation function
void Connection6Synapse18Init(Connection6Synapse18* me);

// connection6_synapse18 Execution function
void Connection6Synapse18Run(Connection6Synapse18* me);

#endif // CONNECTION6_SYNAPSE18_H_