#ifndef CONNECTION2_SYNAPSE65_H_
#define CONNECTION2_SYNAPSE65_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse65 States
enum Connection2Synapse65States {
    CONNECTION2_SYNAPSE65_L,
};

// connection2_synapse65 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse65States state;
} Connection2Synapse65;

// connection2_synapse65 Initialisation function
void Connection2Synapse65Init(Connection2Synapse65* me);

// connection2_synapse65 Execution function
void Connection2Synapse65Run(Connection2Synapse65* me);

#endif // CONNECTION2_SYNAPSE65_H_