#ifndef CONNECTION2_SYNAPSE71_H_
#define CONNECTION2_SYNAPSE71_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse71 States
enum Connection2Synapse71States {
    CONNECTION2_SYNAPSE71_L,
};

// connection2_synapse71 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse71States state;
} Connection2Synapse71;

// connection2_synapse71 Initialisation function
void Connection2Synapse71Init(Connection2Synapse71* me);

// connection2_synapse71 Execution function
void Connection2Synapse71Run(Connection2Synapse71* me);

#endif // CONNECTION2_SYNAPSE71_H_