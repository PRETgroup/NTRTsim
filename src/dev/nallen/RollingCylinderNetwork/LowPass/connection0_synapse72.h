#ifndef CONNECTION0_SYNAPSE72_H_
#define CONNECTION0_SYNAPSE72_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse72 States
enum Connection0Synapse72States {
    CONNECTION0_SYNAPSE72_L,
};

// connection0_synapse72 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse72States state;
} Connection0Synapse72;

// connection0_synapse72 Initialisation function
void Connection0Synapse72Init(Connection0Synapse72* me);

// connection0_synapse72 Execution function
void Connection0Synapse72Run(Connection0Synapse72* me);

#endif // CONNECTION0_SYNAPSE72_H_