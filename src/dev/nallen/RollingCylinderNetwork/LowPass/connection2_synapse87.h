#ifndef CONNECTION2_SYNAPSE87_H_
#define CONNECTION2_SYNAPSE87_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse87 States
enum Connection2Synapse87States {
    CONNECTION2_SYNAPSE87_L,
};

// connection2_synapse87 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse87States state;
} Connection2Synapse87;

// connection2_synapse87 Initialisation function
void Connection2Synapse87Init(Connection2Synapse87* me);

// connection2_synapse87 Execution function
void Connection2Synapse87Run(Connection2Synapse87* me);

#endif // CONNECTION2_SYNAPSE87_H_