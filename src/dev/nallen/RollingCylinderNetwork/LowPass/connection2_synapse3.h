#ifndef CONNECTION2_SYNAPSE3_H_
#define CONNECTION2_SYNAPSE3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse3 States
enum Connection2Synapse3States {
    CONNECTION2_SYNAPSE3_L,
};

// connection2_synapse3 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse3States state;
} Connection2Synapse3;

// connection2_synapse3 Initialisation function
void Connection2Synapse3Init(Connection2Synapse3* me);

// connection2_synapse3 Execution function
void Connection2Synapse3Run(Connection2Synapse3* me);

#endif // CONNECTION2_SYNAPSE3_H_