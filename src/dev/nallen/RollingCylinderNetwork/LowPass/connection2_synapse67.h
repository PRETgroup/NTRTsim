#ifndef CONNECTION2_SYNAPSE67_H_
#define CONNECTION2_SYNAPSE67_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse67 States
enum Connection2Synapse67States {
    CONNECTION2_SYNAPSE67_L,
};

// connection2_synapse67 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse67States state;
} Connection2Synapse67;

// connection2_synapse67 Initialisation function
void Connection2Synapse67Init(Connection2Synapse67* me);

// connection2_synapse67 Execution function
void Connection2Synapse67Run(Connection2Synapse67* me);

#endif // CONNECTION2_SYNAPSE67_H_