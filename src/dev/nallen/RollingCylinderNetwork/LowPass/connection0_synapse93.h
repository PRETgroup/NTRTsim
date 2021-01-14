#ifndef CONNECTION0_SYNAPSE93_H_
#define CONNECTION0_SYNAPSE93_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse93 States
enum Connection0Synapse93States {
    CONNECTION0_SYNAPSE93_L,
};

// connection0_synapse93 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse93States state;
} Connection0Synapse93;

// connection0_synapse93 Initialisation function
void Connection0Synapse93Init(Connection0Synapse93* me);

// connection0_synapse93 Execution function
void Connection0Synapse93Run(Connection0Synapse93* me);

#endif // CONNECTION0_SYNAPSE93_H_