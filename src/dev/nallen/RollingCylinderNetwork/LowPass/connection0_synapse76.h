#ifndef CONNECTION0_SYNAPSE76_H_
#define CONNECTION0_SYNAPSE76_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse76 States
enum Connection0Synapse76States {
    CONNECTION0_SYNAPSE76_L,
};

// connection0_synapse76 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse76States state;
} Connection0Synapse76;

// connection0_synapse76 Initialisation function
void Connection0Synapse76Init(Connection0Synapse76* me);

// connection0_synapse76 Execution function
void Connection0Synapse76Run(Connection0Synapse76* me);

#endif // CONNECTION0_SYNAPSE76_H_