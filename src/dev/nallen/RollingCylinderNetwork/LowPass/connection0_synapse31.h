#ifndef CONNECTION0_SYNAPSE31_H_
#define CONNECTION0_SYNAPSE31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse31 States
enum Connection0Synapse31States {
    CONNECTION0_SYNAPSE31_L,
};

// connection0_synapse31 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse31States state;
} Connection0Synapse31;

// connection0_synapse31 Initialisation function
void Connection0Synapse31Init(Connection0Synapse31* me);

// connection0_synapse31 Execution function
void Connection0Synapse31Run(Connection0Synapse31* me);

#endif // CONNECTION0_SYNAPSE31_H_