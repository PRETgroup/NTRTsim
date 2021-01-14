#ifndef CONNECTION0_SYNAPSE24_H_
#define CONNECTION0_SYNAPSE24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse24 States
enum Connection0Synapse24States {
    CONNECTION0_SYNAPSE24_L,
};

// connection0_synapse24 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse24States state;
} Connection0Synapse24;

// connection0_synapse24 Initialisation function
void Connection0Synapse24Init(Connection0Synapse24* me);

// connection0_synapse24 Execution function
void Connection0Synapse24Run(Connection0Synapse24* me);

#endif // CONNECTION0_SYNAPSE24_H_