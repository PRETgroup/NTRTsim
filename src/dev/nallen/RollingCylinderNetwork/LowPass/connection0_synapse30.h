#ifndef CONNECTION0_SYNAPSE30_H_
#define CONNECTION0_SYNAPSE30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse30 States
enum Connection0Synapse30States {
    CONNECTION0_SYNAPSE30_L,
};

// connection0_synapse30 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse30States state;
} Connection0Synapse30;

// connection0_synapse30 Initialisation function
void Connection0Synapse30Init(Connection0Synapse30* me);

// connection0_synapse30 Execution function
void Connection0Synapse30Run(Connection0Synapse30* me);

#endif // CONNECTION0_SYNAPSE30_H_