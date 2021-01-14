#ifndef CONNECTION0_SYNAPSE73_H_
#define CONNECTION0_SYNAPSE73_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse73 States
enum Connection0Synapse73States {
    CONNECTION0_SYNAPSE73_L,
};

// connection0_synapse73 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse73States state;
} Connection0Synapse73;

// connection0_synapse73 Initialisation function
void Connection0Synapse73Init(Connection0Synapse73* me);

// connection0_synapse73 Execution function
void Connection0Synapse73Run(Connection0Synapse73* me);

#endif // CONNECTION0_SYNAPSE73_H_