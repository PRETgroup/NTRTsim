#ifndef CONNECTION2_SYNAPSE40_H_
#define CONNECTION2_SYNAPSE40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse40 States
enum Connection2Synapse40States {
    CONNECTION2_SYNAPSE40_L,
};

// connection2_synapse40 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse40States state;
} Connection2Synapse40;

// connection2_synapse40 Initialisation function
void Connection2Synapse40Init(Connection2Synapse40* me);

// connection2_synapse40 Execution function
void Connection2Synapse40Run(Connection2Synapse40* me);

#endif // CONNECTION2_SYNAPSE40_H_