#ifndef CONNECTION2_SYNAPSE59_H_
#define CONNECTION2_SYNAPSE59_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse59 States
enum Connection2Synapse59States {
    CONNECTION2_SYNAPSE59_L,
};

// connection2_synapse59 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse59States state;
} Connection2Synapse59;

// connection2_synapse59 Initialisation function
void Connection2Synapse59Init(Connection2Synapse59* me);

// connection2_synapse59 Execution function
void Connection2Synapse59Run(Connection2Synapse59* me);

#endif // CONNECTION2_SYNAPSE59_H_