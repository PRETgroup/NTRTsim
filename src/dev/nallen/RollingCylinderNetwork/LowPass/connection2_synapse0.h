#ifndef CONNECTION2_SYNAPSE0_H_
#define CONNECTION2_SYNAPSE0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse0 States
enum Connection2Synapse0States {
    CONNECTION2_SYNAPSE0_L,
};

// connection2_synapse0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse0States state;
} Connection2Synapse0;

// connection2_synapse0 Initialisation function
void Connection2Synapse0Init(Connection2Synapse0* me);

// connection2_synapse0 Execution function
void Connection2Synapse0Run(Connection2Synapse0* me);

#endif // CONNECTION2_SYNAPSE0_H_