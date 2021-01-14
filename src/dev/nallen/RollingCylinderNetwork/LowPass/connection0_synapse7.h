#ifndef CONNECTION0_SYNAPSE7_H_
#define CONNECTION0_SYNAPSE7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse7 States
enum Connection0Synapse7States {
    CONNECTION0_SYNAPSE7_L,
};

// connection0_synapse7 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse7States state;
} Connection0Synapse7;

// connection0_synapse7 Initialisation function
void Connection0Synapse7Init(Connection0Synapse7* me);

// connection0_synapse7 Execution function
void Connection0Synapse7Run(Connection0Synapse7* me);

#endif // CONNECTION0_SYNAPSE7_H_