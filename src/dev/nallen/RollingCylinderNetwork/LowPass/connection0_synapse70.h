#ifndef CONNECTION0_SYNAPSE70_H_
#define CONNECTION0_SYNAPSE70_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse70 States
enum Connection0Synapse70States {
    CONNECTION0_SYNAPSE70_L,
};

// connection0_synapse70 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse70States state;
} Connection0Synapse70;

// connection0_synapse70 Initialisation function
void Connection0Synapse70Init(Connection0Synapse70* me);

// connection0_synapse70 Execution function
void Connection0Synapse70Run(Connection0Synapse70* me);

#endif // CONNECTION0_SYNAPSE70_H_