#ifndef CONNECTION0_SYNAPSE33_H_
#define CONNECTION0_SYNAPSE33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse33 States
enum Connection0Synapse33States {
    CONNECTION0_SYNAPSE33_L,
};

// connection0_synapse33 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse33States state;
} Connection0Synapse33;

// connection0_synapse33 Initialisation function
void Connection0Synapse33Init(Connection0Synapse33* me);

// connection0_synapse33 Execution function
void Connection0Synapse33Run(Connection0Synapse33* me);

#endif // CONNECTION0_SYNAPSE33_H_