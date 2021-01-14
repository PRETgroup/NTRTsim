#ifndef CONNECTION2_SYNAPSE52_H_
#define CONNECTION2_SYNAPSE52_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse52 States
enum Connection2Synapse52States {
    CONNECTION2_SYNAPSE52_L,
};

// connection2_synapse52 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse52States state;
} Connection2Synapse52;

// connection2_synapse52 Initialisation function
void Connection2Synapse52Init(Connection2Synapse52* me);

// connection2_synapse52 Execution function
void Connection2Synapse52Run(Connection2Synapse52* me);

#endif // CONNECTION2_SYNAPSE52_H_