#ifndef CONNECTION2_SYNAPSE46_H_
#define CONNECTION2_SYNAPSE46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse46 States
enum Connection2Synapse46States {
    CONNECTION2_SYNAPSE46_L,
};

// connection2_synapse46 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse46States state;
} Connection2Synapse46;

// connection2_synapse46 Initialisation function
void Connection2Synapse46Init(Connection2Synapse46* me);

// connection2_synapse46 Execution function
void Connection2Synapse46Run(Connection2Synapse46* me);

#endif // CONNECTION2_SYNAPSE46_H_