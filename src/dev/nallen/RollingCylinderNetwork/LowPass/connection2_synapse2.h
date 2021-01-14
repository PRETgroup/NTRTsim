#ifndef CONNECTION2_SYNAPSE2_H_
#define CONNECTION2_SYNAPSE2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse2 States
enum Connection2Synapse2States {
    CONNECTION2_SYNAPSE2_L,
};

// connection2_synapse2 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse2States state;
} Connection2Synapse2;

// connection2_synapse2 Initialisation function
void Connection2Synapse2Init(Connection2Synapse2* me);

// connection2_synapse2 Execution function
void Connection2Synapse2Run(Connection2Synapse2* me);

#endif // CONNECTION2_SYNAPSE2_H_