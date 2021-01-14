#ifndef CONNECTION2_SYNAPSE14_H_
#define CONNECTION2_SYNAPSE14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse14 States
enum Connection2Synapse14States {
    CONNECTION2_SYNAPSE14_L,
};

// connection2_synapse14 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse14States state;
} Connection2Synapse14;

// connection2_synapse14 Initialisation function
void Connection2Synapse14Init(Connection2Synapse14* me);

// connection2_synapse14 Execution function
void Connection2Synapse14Run(Connection2Synapse14* me);

#endif // CONNECTION2_SYNAPSE14_H_