#ifndef CONNECTION0_SYNAPSE11_H_
#define CONNECTION0_SYNAPSE11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse11 States
enum Connection0Synapse11States {
    CONNECTION0_SYNAPSE11_L,
};

// connection0_synapse11 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse11States state;
} Connection0Synapse11;

// connection0_synapse11 Initialisation function
void Connection0Synapse11Init(Connection0Synapse11* me);

// connection0_synapse11 Execution function
void Connection0Synapse11Run(Connection0Synapse11* me);

#endif // CONNECTION0_SYNAPSE11_H_