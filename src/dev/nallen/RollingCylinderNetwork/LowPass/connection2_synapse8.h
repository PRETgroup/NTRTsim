#ifndef CONNECTION2_SYNAPSE8_H_
#define CONNECTION2_SYNAPSE8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse8 States
enum Connection2Synapse8States {
    CONNECTION2_SYNAPSE8_L,
};

// connection2_synapse8 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse8States state;
} Connection2Synapse8;

// connection2_synapse8 Initialisation function
void Connection2Synapse8Init(Connection2Synapse8* me);

// connection2_synapse8 Execution function
void Connection2Synapse8Run(Connection2Synapse8* me);

#endif // CONNECTION2_SYNAPSE8_H_