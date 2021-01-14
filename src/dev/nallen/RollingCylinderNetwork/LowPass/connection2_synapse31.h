#ifndef CONNECTION2_SYNAPSE31_H_
#define CONNECTION2_SYNAPSE31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse31 States
enum Connection2Synapse31States {
    CONNECTION2_SYNAPSE31_L,
};

// connection2_synapse31 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse31States state;
} Connection2Synapse31;

// connection2_synapse31 Initialisation function
void Connection2Synapse31Init(Connection2Synapse31* me);

// connection2_synapse31 Execution function
void Connection2Synapse31Run(Connection2Synapse31* me);

#endif // CONNECTION2_SYNAPSE31_H_