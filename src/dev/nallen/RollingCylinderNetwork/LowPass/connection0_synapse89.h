#ifndef CONNECTION0_SYNAPSE89_H_
#define CONNECTION0_SYNAPSE89_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse89 States
enum Connection0Synapse89States {
    CONNECTION0_SYNAPSE89_L,
};

// connection0_synapse89 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse89States state;
} Connection0Synapse89;

// connection0_synapse89 Initialisation function
void Connection0Synapse89Init(Connection0Synapse89* me);

// connection0_synapse89 Execution function
void Connection0Synapse89Run(Connection0Synapse89* me);

#endif // CONNECTION0_SYNAPSE89_H_