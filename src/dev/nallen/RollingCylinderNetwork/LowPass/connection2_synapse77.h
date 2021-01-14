#ifndef CONNECTION2_SYNAPSE77_H_
#define CONNECTION2_SYNAPSE77_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse77 States
enum Connection2Synapse77States {
    CONNECTION2_SYNAPSE77_L,
};

// connection2_synapse77 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse77States state;
} Connection2Synapse77;

// connection2_synapse77 Initialisation function
void Connection2Synapse77Init(Connection2Synapse77* me);

// connection2_synapse77 Execution function
void Connection2Synapse77Run(Connection2Synapse77* me);

#endif // CONNECTION2_SYNAPSE77_H_