#ifndef CONNECTION2_SYNAPSE95_H_
#define CONNECTION2_SYNAPSE95_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse95 States
enum Connection2Synapse95States {
    CONNECTION2_SYNAPSE95_L,
};

// connection2_synapse95 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse95States state;
} Connection2Synapse95;

// connection2_synapse95 Initialisation function
void Connection2Synapse95Init(Connection2Synapse95* me);

// connection2_synapse95 Execution function
void Connection2Synapse95Run(Connection2Synapse95* me);

#endif // CONNECTION2_SYNAPSE95_H_