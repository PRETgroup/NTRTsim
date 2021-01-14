#ifndef CONNECTION0_SYNAPSE9_H_
#define CONNECTION0_SYNAPSE9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse9 States
enum Connection0Synapse9States {
    CONNECTION0_SYNAPSE9_L,
};

// connection0_synapse9 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse9States state;
} Connection0Synapse9;

// connection0_synapse9 Initialisation function
void Connection0Synapse9Init(Connection0Synapse9* me);

// connection0_synapse9 Execution function
void Connection0Synapse9Run(Connection0Synapse9* me);

#endif // CONNECTION0_SYNAPSE9_H_