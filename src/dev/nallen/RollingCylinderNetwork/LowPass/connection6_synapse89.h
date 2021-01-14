#ifndef CONNECTION6_SYNAPSE89_H_
#define CONNECTION6_SYNAPSE89_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse89 States
enum Connection6Synapse89States {
    CONNECTION6_SYNAPSE89_L,
};

// connection6_synapse89 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse89States state;
} Connection6Synapse89;

// connection6_synapse89 Initialisation function
void Connection6Synapse89Init(Connection6Synapse89* me);

// connection6_synapse89 Execution function
void Connection6Synapse89Run(Connection6Synapse89* me);

#endif // CONNECTION6_SYNAPSE89_H_