#ifndef CONNECTION0_SYNAPSE62_H_
#define CONNECTION0_SYNAPSE62_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse62 States
enum Connection0Synapse62States {
    CONNECTION0_SYNAPSE62_L,
};

// connection0_synapse62 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse62States state;
} Connection0Synapse62;

// connection0_synapse62 Initialisation function
void Connection0Synapse62Init(Connection0Synapse62* me);

// connection0_synapse62 Execution function
void Connection0Synapse62Run(Connection0Synapse62* me);

#endif // CONNECTION0_SYNAPSE62_H_