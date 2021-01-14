#ifndef CONNECTION0_SYNAPSE90_H_
#define CONNECTION0_SYNAPSE90_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse90 States
enum Connection0Synapse90States {
    CONNECTION0_SYNAPSE90_L,
};

// connection0_synapse90 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse90States state;
} Connection0Synapse90;

// connection0_synapse90 Initialisation function
void Connection0Synapse90Init(Connection0Synapse90* me);

// connection0_synapse90 Execution function
void Connection0Synapse90Run(Connection0Synapse90* me);

#endif // CONNECTION0_SYNAPSE90_H_