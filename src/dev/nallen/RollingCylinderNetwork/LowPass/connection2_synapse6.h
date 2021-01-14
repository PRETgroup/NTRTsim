#ifndef CONNECTION2_SYNAPSE6_H_
#define CONNECTION2_SYNAPSE6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse6 States
enum Connection2Synapse6States {
    CONNECTION2_SYNAPSE6_L,
};

// connection2_synapse6 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse6States state;
} Connection2Synapse6;

// connection2_synapse6 Initialisation function
void Connection2Synapse6Init(Connection2Synapse6* me);

// connection2_synapse6 Execution function
void Connection2Synapse6Run(Connection2Synapse6* me);

#endif // CONNECTION2_SYNAPSE6_H_