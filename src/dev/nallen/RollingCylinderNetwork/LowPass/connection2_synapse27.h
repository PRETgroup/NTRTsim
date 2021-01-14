#ifndef CONNECTION2_SYNAPSE27_H_
#define CONNECTION2_SYNAPSE27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse27 States
enum Connection2Synapse27States {
    CONNECTION2_SYNAPSE27_L,
};

// connection2_synapse27 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse27States state;
} Connection2Synapse27;

// connection2_synapse27 Initialisation function
void Connection2Synapse27Init(Connection2Synapse27* me);

// connection2_synapse27 Execution function
void Connection2Synapse27Run(Connection2Synapse27* me);

#endif // CONNECTION2_SYNAPSE27_H_