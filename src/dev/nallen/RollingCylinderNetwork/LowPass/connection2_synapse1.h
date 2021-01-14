#ifndef CONNECTION2_SYNAPSE1_H_
#define CONNECTION2_SYNAPSE1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse1 States
enum Connection2Synapse1States {
    CONNECTION2_SYNAPSE1_L,
};

// connection2_synapse1 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse1States state;
} Connection2Synapse1;

// connection2_synapse1 Initialisation function
void Connection2Synapse1Init(Connection2Synapse1* me);

// connection2_synapse1 Execution function
void Connection2Synapse1Run(Connection2Synapse1* me);

#endif // CONNECTION2_SYNAPSE1_H_