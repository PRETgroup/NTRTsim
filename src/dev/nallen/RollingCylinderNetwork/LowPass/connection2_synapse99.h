#ifndef CONNECTION2_SYNAPSE99_H_
#define CONNECTION2_SYNAPSE99_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse99 States
enum Connection2Synapse99States {
    CONNECTION2_SYNAPSE99_L,
};

// connection2_synapse99 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse99States state;
} Connection2Synapse99;

// connection2_synapse99 Initialisation function
void Connection2Synapse99Init(Connection2Synapse99* me);

// connection2_synapse99 Execution function
void Connection2Synapse99Run(Connection2Synapse99* me);

#endif // CONNECTION2_SYNAPSE99_H_