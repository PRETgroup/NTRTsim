#ifndef CONNECTION2_SYNAPSE75_H_
#define CONNECTION2_SYNAPSE75_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse75 States
enum Connection2Synapse75States {
    CONNECTION2_SYNAPSE75_L,
};

// connection2_synapse75 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse75States state;
} Connection2Synapse75;

// connection2_synapse75 Initialisation function
void Connection2Synapse75Init(Connection2Synapse75* me);

// connection2_synapse75 Execution function
void Connection2Synapse75Run(Connection2Synapse75* me);

#endif // CONNECTION2_SYNAPSE75_H_