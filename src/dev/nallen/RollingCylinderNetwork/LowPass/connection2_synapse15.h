#ifndef CONNECTION2_SYNAPSE15_H_
#define CONNECTION2_SYNAPSE15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse15 States
enum Connection2Synapse15States {
    CONNECTION2_SYNAPSE15_L,
};

// connection2_synapse15 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse15States state;
} Connection2Synapse15;

// connection2_synapse15 Initialisation function
void Connection2Synapse15Init(Connection2Synapse15* me);

// connection2_synapse15 Execution function
void Connection2Synapse15Run(Connection2Synapse15* me);

#endif // CONNECTION2_SYNAPSE15_H_