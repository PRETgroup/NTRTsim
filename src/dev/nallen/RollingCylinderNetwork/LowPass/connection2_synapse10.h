#ifndef CONNECTION2_SYNAPSE10_H_
#define CONNECTION2_SYNAPSE10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse10 States
enum Connection2Synapse10States {
    CONNECTION2_SYNAPSE10_L,
};

// connection2_synapse10 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse10States state;
} Connection2Synapse10;

// connection2_synapse10 Initialisation function
void Connection2Synapse10Init(Connection2Synapse10* me);

// connection2_synapse10 Execution function
void Connection2Synapse10Run(Connection2Synapse10* me);

#endif // CONNECTION2_SYNAPSE10_H_