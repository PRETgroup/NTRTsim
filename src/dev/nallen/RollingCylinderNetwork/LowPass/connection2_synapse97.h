#ifndef CONNECTION2_SYNAPSE97_H_
#define CONNECTION2_SYNAPSE97_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse97 States
enum Connection2Synapse97States {
    CONNECTION2_SYNAPSE97_L,
};

// connection2_synapse97 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse97States state;
} Connection2Synapse97;

// connection2_synapse97 Initialisation function
void Connection2Synapse97Init(Connection2Synapse97* me);

// connection2_synapse97 Execution function
void Connection2Synapse97Run(Connection2Synapse97* me);

#endif // CONNECTION2_SYNAPSE97_H_