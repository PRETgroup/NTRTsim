#ifndef CONNECTION2_SYNAPSE92_H_
#define CONNECTION2_SYNAPSE92_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse92 States
enum Connection2Synapse92States {
    CONNECTION2_SYNAPSE92_L,
};

// connection2_synapse92 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse92States state;
} Connection2Synapse92;

// connection2_synapse92 Initialisation function
void Connection2Synapse92Init(Connection2Synapse92* me);

// connection2_synapse92 Execution function
void Connection2Synapse92Run(Connection2Synapse92* me);

#endif // CONNECTION2_SYNAPSE92_H_