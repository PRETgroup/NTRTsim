#ifndef CONNECTION6_SYNAPSE99_H_
#define CONNECTION6_SYNAPSE99_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse99 States
enum Connection6Synapse99States {
    CONNECTION6_SYNAPSE99_L,
};

// connection6_synapse99 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse99States state;
} Connection6Synapse99;

// connection6_synapse99 Initialisation function
void Connection6Synapse99Init(Connection6Synapse99* me);

// connection6_synapse99 Execution function
void Connection6Synapse99Run(Connection6Synapse99* me);

#endif // CONNECTION6_SYNAPSE99_H_