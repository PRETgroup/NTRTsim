#ifndef CONNECTION2_SYNAPSE74_H_
#define CONNECTION2_SYNAPSE74_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse74 States
enum Connection2Synapse74States {
    CONNECTION2_SYNAPSE74_L,
};

// connection2_synapse74 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse74States state;
} Connection2Synapse74;

// connection2_synapse74 Initialisation function
void Connection2Synapse74Init(Connection2Synapse74* me);

// connection2_synapse74 Execution function
void Connection2Synapse74Run(Connection2Synapse74* me);

#endif // CONNECTION2_SYNAPSE74_H_