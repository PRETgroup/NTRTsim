#ifndef CONNECTION0_SYNAPSE99_H_
#define CONNECTION0_SYNAPSE99_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse99 States
enum Connection0Synapse99States {
    CONNECTION0_SYNAPSE99_L,
};

// connection0_synapse99 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse99States state;
} Connection0Synapse99;

// connection0_synapse99 Initialisation function
void Connection0Synapse99Init(Connection0Synapse99* me);

// connection0_synapse99 Execution function
void Connection0Synapse99Run(Connection0Synapse99* me);

#endif // CONNECTION0_SYNAPSE99_H_