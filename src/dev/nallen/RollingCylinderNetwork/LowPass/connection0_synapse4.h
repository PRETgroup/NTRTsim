#ifndef CONNECTION0_SYNAPSE4_H_
#define CONNECTION0_SYNAPSE4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse4 States
enum Connection0Synapse4States {
    CONNECTION0_SYNAPSE4_L,
};

// connection0_synapse4 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse4States state;
} Connection0Synapse4;

// connection0_synapse4 Initialisation function
void Connection0Synapse4Init(Connection0Synapse4* me);

// connection0_synapse4 Execution function
void Connection0Synapse4Run(Connection0Synapse4* me);

#endif // CONNECTION0_SYNAPSE4_H_