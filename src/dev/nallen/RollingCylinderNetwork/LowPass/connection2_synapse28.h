#ifndef CONNECTION2_SYNAPSE28_H_
#define CONNECTION2_SYNAPSE28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse28 States
enum Connection2Synapse28States {
    CONNECTION2_SYNAPSE28_L,
};

// connection2_synapse28 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse28States state;
} Connection2Synapse28;

// connection2_synapse28 Initialisation function
void Connection2Synapse28Init(Connection2Synapse28* me);

// connection2_synapse28 Execution function
void Connection2Synapse28Run(Connection2Synapse28* me);

#endif // CONNECTION2_SYNAPSE28_H_