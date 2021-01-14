#ifndef CONNECTION2_SYNAPSE85_H_
#define CONNECTION2_SYNAPSE85_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse85 States
enum Connection2Synapse85States {
    CONNECTION2_SYNAPSE85_L,
};

// connection2_synapse85 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse85States state;
} Connection2Synapse85;

// connection2_synapse85 Initialisation function
void Connection2Synapse85Init(Connection2Synapse85* me);

// connection2_synapse85 Execution function
void Connection2Synapse85Run(Connection2Synapse85* me);

#endif // CONNECTION2_SYNAPSE85_H_