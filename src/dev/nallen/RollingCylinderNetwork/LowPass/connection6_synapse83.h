#ifndef CONNECTION6_SYNAPSE83_H_
#define CONNECTION6_SYNAPSE83_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse83 States
enum Connection6Synapse83States {
    CONNECTION6_SYNAPSE83_L,
};

// connection6_synapse83 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse83States state;
} Connection6Synapse83;

// connection6_synapse83 Initialisation function
void Connection6Synapse83Init(Connection6Synapse83* me);

// connection6_synapse83 Execution function
void Connection6Synapse83Run(Connection6Synapse83* me);

#endif // CONNECTION6_SYNAPSE83_H_