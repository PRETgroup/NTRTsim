#ifndef CONNECTION0_SYNAPSE52_H_
#define CONNECTION0_SYNAPSE52_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse52 States
enum Connection0Synapse52States {
    CONNECTION0_SYNAPSE52_L,
};

// connection0_synapse52 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse52States state;
} Connection0Synapse52;

// connection0_synapse52 Initialisation function
void Connection0Synapse52Init(Connection0Synapse52* me);

// connection0_synapse52 Execution function
void Connection0Synapse52Run(Connection0Synapse52* me);

#endif // CONNECTION0_SYNAPSE52_H_