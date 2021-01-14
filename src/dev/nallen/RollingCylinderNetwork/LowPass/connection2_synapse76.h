#ifndef CONNECTION2_SYNAPSE76_H_
#define CONNECTION2_SYNAPSE76_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse76 States
enum Connection2Synapse76States {
    CONNECTION2_SYNAPSE76_L,
};

// connection2_synapse76 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse76States state;
} Connection2Synapse76;

// connection2_synapse76 Initialisation function
void Connection2Synapse76Init(Connection2Synapse76* me);

// connection2_synapse76 Execution function
void Connection2Synapse76Run(Connection2Synapse76* me);

#endif // CONNECTION2_SYNAPSE76_H_