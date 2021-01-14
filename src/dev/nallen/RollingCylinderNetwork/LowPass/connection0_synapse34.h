#ifndef CONNECTION0_SYNAPSE34_H_
#define CONNECTION0_SYNAPSE34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse34 States
enum Connection0Synapse34States {
    CONNECTION0_SYNAPSE34_L,
};

// connection0_synapse34 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse34States state;
} Connection0Synapse34;

// connection0_synapse34 Initialisation function
void Connection0Synapse34Init(Connection0Synapse34* me);

// connection0_synapse34 Execution function
void Connection0Synapse34Run(Connection0Synapse34* me);

#endif // CONNECTION0_SYNAPSE34_H_