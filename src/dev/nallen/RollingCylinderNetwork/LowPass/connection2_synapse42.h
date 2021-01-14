#ifndef CONNECTION2_SYNAPSE42_H_
#define CONNECTION2_SYNAPSE42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse42 States
enum Connection2Synapse42States {
    CONNECTION2_SYNAPSE42_L,
};

// connection2_synapse42 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse42States state;
} Connection2Synapse42;

// connection2_synapse42 Initialisation function
void Connection2Synapse42Init(Connection2Synapse42* me);

// connection2_synapse42 Execution function
void Connection2Synapse42Run(Connection2Synapse42* me);

#endif // CONNECTION2_SYNAPSE42_H_