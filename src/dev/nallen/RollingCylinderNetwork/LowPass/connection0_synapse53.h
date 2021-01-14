#ifndef CONNECTION0_SYNAPSE53_H_
#define CONNECTION0_SYNAPSE53_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse53 States
enum Connection0Synapse53States {
    CONNECTION0_SYNAPSE53_L,
};

// connection0_synapse53 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse53States state;
} Connection0Synapse53;

// connection0_synapse53 Initialisation function
void Connection0Synapse53Init(Connection0Synapse53* me);

// connection0_synapse53 Execution function
void Connection0Synapse53Run(Connection0Synapse53* me);

#endif // CONNECTION0_SYNAPSE53_H_