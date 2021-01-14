#ifndef CONNECTION2_SYNAPSE57_H_
#define CONNECTION2_SYNAPSE57_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse57 States
enum Connection2Synapse57States {
    CONNECTION2_SYNAPSE57_L,
};

// connection2_synapse57 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse57States state;
} Connection2Synapse57;

// connection2_synapse57 Initialisation function
void Connection2Synapse57Init(Connection2Synapse57* me);

// connection2_synapse57 Execution function
void Connection2Synapse57Run(Connection2Synapse57* me);

#endif // CONNECTION2_SYNAPSE57_H_