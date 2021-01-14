#ifndef CONNECTION2_SYNAPSE58_H_
#define CONNECTION2_SYNAPSE58_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse58 States
enum Connection2Synapse58States {
    CONNECTION2_SYNAPSE58_L,
};

// connection2_synapse58 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse58States state;
} Connection2Synapse58;

// connection2_synapse58 Initialisation function
void Connection2Synapse58Init(Connection2Synapse58* me);

// connection2_synapse58 Execution function
void Connection2Synapse58Run(Connection2Synapse58* me);

#endif // CONNECTION2_SYNAPSE58_H_