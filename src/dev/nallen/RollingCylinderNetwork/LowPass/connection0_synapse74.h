#ifndef CONNECTION0_SYNAPSE74_H_
#define CONNECTION0_SYNAPSE74_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse74 States
enum Connection0Synapse74States {
    CONNECTION0_SYNAPSE74_L,
};

// connection0_synapse74 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse74States state;
} Connection0Synapse74;

// connection0_synapse74 Initialisation function
void Connection0Synapse74Init(Connection0Synapse74* me);

// connection0_synapse74 Execution function
void Connection0Synapse74Run(Connection0Synapse74* me);

#endif // CONNECTION0_SYNAPSE74_H_