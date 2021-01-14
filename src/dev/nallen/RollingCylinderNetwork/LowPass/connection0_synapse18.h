#ifndef CONNECTION0_SYNAPSE18_H_
#define CONNECTION0_SYNAPSE18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse18 States
enum Connection0Synapse18States {
    CONNECTION0_SYNAPSE18_L,
};

// connection0_synapse18 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse18States state;
} Connection0Synapse18;

// connection0_synapse18 Initialisation function
void Connection0Synapse18Init(Connection0Synapse18* me);

// connection0_synapse18 Execution function
void Connection0Synapse18Run(Connection0Synapse18* me);

#endif // CONNECTION0_SYNAPSE18_H_