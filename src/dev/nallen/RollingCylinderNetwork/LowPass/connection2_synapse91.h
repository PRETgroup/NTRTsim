#ifndef CONNECTION2_SYNAPSE91_H_
#define CONNECTION2_SYNAPSE91_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse91 States
enum Connection2Synapse91States {
    CONNECTION2_SYNAPSE91_L,
};

// connection2_synapse91 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse91States state;
} Connection2Synapse91;

// connection2_synapse91 Initialisation function
void Connection2Synapse91Init(Connection2Synapse91* me);

// connection2_synapse91 Execution function
void Connection2Synapse91Run(Connection2Synapse91* me);

#endif // CONNECTION2_SYNAPSE91_H_