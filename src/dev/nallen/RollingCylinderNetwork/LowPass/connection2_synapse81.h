#ifndef CONNECTION2_SYNAPSE81_H_
#define CONNECTION2_SYNAPSE81_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse81 States
enum Connection2Synapse81States {
    CONNECTION2_SYNAPSE81_L,
};

// connection2_synapse81 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse81States state;
} Connection2Synapse81;

// connection2_synapse81 Initialisation function
void Connection2Synapse81Init(Connection2Synapse81* me);

// connection2_synapse81 Execution function
void Connection2Synapse81Run(Connection2Synapse81* me);

#endif // CONNECTION2_SYNAPSE81_H_