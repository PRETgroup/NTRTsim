#ifndef CONNECTION0_SYNAPSE94_H_
#define CONNECTION0_SYNAPSE94_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse94 States
enum Connection0Synapse94States {
    CONNECTION0_SYNAPSE94_L,
};

// connection0_synapse94 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse94States state;
} Connection0Synapse94;

// connection0_synapse94 Initialisation function
void Connection0Synapse94Init(Connection0Synapse94* me);

// connection0_synapse94 Execution function
void Connection0Synapse94Run(Connection0Synapse94* me);

#endif // CONNECTION0_SYNAPSE94_H_