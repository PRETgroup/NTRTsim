#ifndef CONNECTION0_SYNAPSE63_H_
#define CONNECTION0_SYNAPSE63_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse63 States
enum Connection0Synapse63States {
    CONNECTION0_SYNAPSE63_L,
};

// connection0_synapse63 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse63States state;
} Connection0Synapse63;

// connection0_synapse63 Initialisation function
void Connection0Synapse63Init(Connection0Synapse63* me);

// connection0_synapse63 Execution function
void Connection0Synapse63Run(Connection0Synapse63* me);

#endif // CONNECTION0_SYNAPSE63_H_