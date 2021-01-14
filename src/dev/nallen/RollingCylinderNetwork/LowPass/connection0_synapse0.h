#ifndef CONNECTION0_SYNAPSE0_H_
#define CONNECTION0_SYNAPSE0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse0 States
enum Connection0Synapse0States {
    CONNECTION0_SYNAPSE0_L,
};

// connection0_synapse0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse0States state;
} Connection0Synapse0;

// connection0_synapse0 Initialisation function
void Connection0Synapse0Init(Connection0Synapse0* me);

// connection0_synapse0 Execution function
void Connection0Synapse0Run(Connection0Synapse0* me);

#endif // CONNECTION0_SYNAPSE0_H_