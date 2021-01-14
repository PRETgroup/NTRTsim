#ifndef CONNECTION2_SYNAPSE17_H_
#define CONNECTION2_SYNAPSE17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse17 States
enum Connection2Synapse17States {
    CONNECTION2_SYNAPSE17_L,
};

// connection2_synapse17 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse17States state;
} Connection2Synapse17;

// connection2_synapse17 Initialisation function
void Connection2Synapse17Init(Connection2Synapse17* me);

// connection2_synapse17 Execution function
void Connection2Synapse17Run(Connection2Synapse17* me);

#endif // CONNECTION2_SYNAPSE17_H_