#ifndef CONNECTION2_SYNAPSE55_H_
#define CONNECTION2_SYNAPSE55_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse55 States
enum Connection2Synapse55States {
    CONNECTION2_SYNAPSE55_L,
};

// connection2_synapse55 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse55States state;
} Connection2Synapse55;

// connection2_synapse55 Initialisation function
void Connection2Synapse55Init(Connection2Synapse55* me);

// connection2_synapse55 Execution function
void Connection2Synapse55Run(Connection2Synapse55* me);

#endif // CONNECTION2_SYNAPSE55_H_