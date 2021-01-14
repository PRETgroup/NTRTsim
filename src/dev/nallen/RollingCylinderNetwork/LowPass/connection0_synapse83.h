#ifndef CONNECTION0_SYNAPSE83_H_
#define CONNECTION0_SYNAPSE83_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse83 States
enum Connection0Synapse83States {
    CONNECTION0_SYNAPSE83_L,
};

// connection0_synapse83 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse83States state;
} Connection0Synapse83;

// connection0_synapse83 Initialisation function
void Connection0Synapse83Init(Connection0Synapse83* me);

// connection0_synapse83 Execution function
void Connection0Synapse83Run(Connection0Synapse83* me);

#endif // CONNECTION0_SYNAPSE83_H_