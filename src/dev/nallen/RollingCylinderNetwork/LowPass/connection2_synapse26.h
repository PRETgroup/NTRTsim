#ifndef CONNECTION2_SYNAPSE26_H_
#define CONNECTION2_SYNAPSE26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse26 States
enum Connection2Synapse26States {
    CONNECTION2_SYNAPSE26_L,
};

// connection2_synapse26 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse26States state;
} Connection2Synapse26;

// connection2_synapse26 Initialisation function
void Connection2Synapse26Init(Connection2Synapse26* me);

// connection2_synapse26 Execution function
void Connection2Synapse26Run(Connection2Synapse26* me);

#endif // CONNECTION2_SYNAPSE26_H_