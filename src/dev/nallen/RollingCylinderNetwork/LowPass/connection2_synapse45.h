#ifndef CONNECTION2_SYNAPSE45_H_
#define CONNECTION2_SYNAPSE45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse45 States
enum Connection2Synapse45States {
    CONNECTION2_SYNAPSE45_L,
};

// connection2_synapse45 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse45States state;
} Connection2Synapse45;

// connection2_synapse45 Initialisation function
void Connection2Synapse45Init(Connection2Synapse45* me);

// connection2_synapse45 Execution function
void Connection2Synapse45Run(Connection2Synapse45* me);

#endif // CONNECTION2_SYNAPSE45_H_