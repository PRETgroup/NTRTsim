#ifndef CONNECTION0_SYNAPSE22_H_
#define CONNECTION0_SYNAPSE22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse22 States
enum Connection0Synapse22States {
    CONNECTION0_SYNAPSE22_L,
};

// connection0_synapse22 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse22States state;
} Connection0Synapse22;

// connection0_synapse22 Initialisation function
void Connection0Synapse22Init(Connection0Synapse22* me);

// connection0_synapse22 Execution function
void Connection0Synapse22Run(Connection0Synapse22* me);

#endif // CONNECTION0_SYNAPSE22_H_