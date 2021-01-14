#ifndef CONNECTION2_SYNAPSE61_H_
#define CONNECTION2_SYNAPSE61_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse61 States
enum Connection2Synapse61States {
    CONNECTION2_SYNAPSE61_L,
};

// connection2_synapse61 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse61States state;
} Connection2Synapse61;

// connection2_synapse61 Initialisation function
void Connection2Synapse61Init(Connection2Synapse61* me);

// connection2_synapse61 Execution function
void Connection2Synapse61Run(Connection2Synapse61* me);

#endif // CONNECTION2_SYNAPSE61_H_