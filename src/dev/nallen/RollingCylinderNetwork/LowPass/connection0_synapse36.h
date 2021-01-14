#ifndef CONNECTION0_SYNAPSE36_H_
#define CONNECTION0_SYNAPSE36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse36 States
enum Connection0Synapse36States {
    CONNECTION0_SYNAPSE36_L,
};

// connection0_synapse36 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse36States state;
} Connection0Synapse36;

// connection0_synapse36 Initialisation function
void Connection0Synapse36Init(Connection0Synapse36* me);

// connection0_synapse36 Execution function
void Connection0Synapse36Run(Connection0Synapse36* me);

#endif // CONNECTION0_SYNAPSE36_H_