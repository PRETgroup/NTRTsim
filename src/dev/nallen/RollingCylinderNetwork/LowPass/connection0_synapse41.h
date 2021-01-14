#ifndef CONNECTION0_SYNAPSE41_H_
#define CONNECTION0_SYNAPSE41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse41 States
enum Connection0Synapse41States {
    CONNECTION0_SYNAPSE41_L,
};

// connection0_synapse41 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse41States state;
} Connection0Synapse41;

// connection0_synapse41 Initialisation function
void Connection0Synapse41Init(Connection0Synapse41* me);

// connection0_synapse41 Execution function
void Connection0Synapse41Run(Connection0Synapse41* me);

#endif // CONNECTION0_SYNAPSE41_H_