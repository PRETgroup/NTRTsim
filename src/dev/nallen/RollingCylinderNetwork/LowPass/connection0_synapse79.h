#ifndef CONNECTION0_SYNAPSE79_H_
#define CONNECTION0_SYNAPSE79_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse79 States
enum Connection0Synapse79States {
    CONNECTION0_SYNAPSE79_L,
};

// connection0_synapse79 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse79States state;
} Connection0Synapse79;

// connection0_synapse79 Initialisation function
void Connection0Synapse79Init(Connection0Synapse79* me);

// connection0_synapse79 Execution function
void Connection0Synapse79Run(Connection0Synapse79* me);

#endif // CONNECTION0_SYNAPSE79_H_