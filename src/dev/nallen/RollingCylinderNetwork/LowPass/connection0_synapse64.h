#ifndef CONNECTION0_SYNAPSE64_H_
#define CONNECTION0_SYNAPSE64_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse64 States
enum Connection0Synapse64States {
    CONNECTION0_SYNAPSE64_L,
};

// connection0_synapse64 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse64States state;
} Connection0Synapse64;

// connection0_synapse64 Initialisation function
void Connection0Synapse64Init(Connection0Synapse64* me);

// connection0_synapse64 Execution function
void Connection0Synapse64Run(Connection0Synapse64* me);

#endif // CONNECTION0_SYNAPSE64_H_