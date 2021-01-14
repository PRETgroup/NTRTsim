#ifndef CONNECTION2_SYNAPSE94_H_
#define CONNECTION2_SYNAPSE94_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse94 States
enum Connection2Synapse94States {
    CONNECTION2_SYNAPSE94_L,
};

// connection2_synapse94 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse94States state;
} Connection2Synapse94;

// connection2_synapse94 Initialisation function
void Connection2Synapse94Init(Connection2Synapse94* me);

// connection2_synapse94 Execution function
void Connection2Synapse94Run(Connection2Synapse94* me);

#endif // CONNECTION2_SYNAPSE94_H_