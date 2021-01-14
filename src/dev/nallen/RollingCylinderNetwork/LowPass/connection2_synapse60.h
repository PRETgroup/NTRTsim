#ifndef CONNECTION2_SYNAPSE60_H_
#define CONNECTION2_SYNAPSE60_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse60 States
enum Connection2Synapse60States {
    CONNECTION2_SYNAPSE60_L,
};

// connection2_synapse60 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse60States state;
} Connection2Synapse60;

// connection2_synapse60 Initialisation function
void Connection2Synapse60Init(Connection2Synapse60* me);

// connection2_synapse60 Execution function
void Connection2Synapse60Run(Connection2Synapse60* me);

#endif // CONNECTION2_SYNAPSE60_H_