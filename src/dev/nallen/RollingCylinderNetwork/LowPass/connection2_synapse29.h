#ifndef CONNECTION2_SYNAPSE29_H_
#define CONNECTION2_SYNAPSE29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse29 States
enum Connection2Synapse29States {
    CONNECTION2_SYNAPSE29_L,
};

// connection2_synapse29 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse29States state;
} Connection2Synapse29;

// connection2_synapse29 Initialisation function
void Connection2Synapse29Init(Connection2Synapse29* me);

// connection2_synapse29 Execution function
void Connection2Synapse29Run(Connection2Synapse29* me);

#endif // CONNECTION2_SYNAPSE29_H_