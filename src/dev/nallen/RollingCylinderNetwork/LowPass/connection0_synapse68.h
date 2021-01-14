#ifndef CONNECTION0_SYNAPSE68_H_
#define CONNECTION0_SYNAPSE68_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse68 States
enum Connection0Synapse68States {
    CONNECTION0_SYNAPSE68_L,
};

// connection0_synapse68 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse68States state;
} Connection0Synapse68;

// connection0_synapse68 Initialisation function
void Connection0Synapse68Init(Connection0Synapse68* me);

// connection0_synapse68 Execution function
void Connection0Synapse68Run(Connection0Synapse68* me);

#endif // CONNECTION0_SYNAPSE68_H_