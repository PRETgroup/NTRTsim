#ifndef CONNECTION2_SYNAPSE63_H_
#define CONNECTION2_SYNAPSE63_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse63 States
enum Connection2Synapse63States {
    CONNECTION2_SYNAPSE63_L,
};

// connection2_synapse63 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse63States state;
} Connection2Synapse63;

// connection2_synapse63 Initialisation function
void Connection2Synapse63Init(Connection2Synapse63* me);

// connection2_synapse63 Execution function
void Connection2Synapse63Run(Connection2Synapse63* me);

#endif // CONNECTION2_SYNAPSE63_H_