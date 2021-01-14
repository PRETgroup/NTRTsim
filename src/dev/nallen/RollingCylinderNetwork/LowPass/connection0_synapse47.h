#ifndef CONNECTION0_SYNAPSE47_H_
#define CONNECTION0_SYNAPSE47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse47 States
enum Connection0Synapse47States {
    CONNECTION0_SYNAPSE47_L,
};

// connection0_synapse47 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse47States state;
} Connection0Synapse47;

// connection0_synapse47 Initialisation function
void Connection0Synapse47Init(Connection0Synapse47* me);

// connection0_synapse47 Execution function
void Connection0Synapse47Run(Connection0Synapse47* me);

#endif // CONNECTION0_SYNAPSE47_H_