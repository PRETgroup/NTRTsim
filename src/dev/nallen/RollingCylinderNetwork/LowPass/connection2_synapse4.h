#ifndef CONNECTION2_SYNAPSE4_H_
#define CONNECTION2_SYNAPSE4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse4 States
enum Connection2Synapse4States {
    CONNECTION2_SYNAPSE4_L,
};

// connection2_synapse4 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse4States state;
} Connection2Synapse4;

// connection2_synapse4 Initialisation function
void Connection2Synapse4Init(Connection2Synapse4* me);

// connection2_synapse4 Execution function
void Connection2Synapse4Run(Connection2Synapse4* me);

#endif // CONNECTION2_SYNAPSE4_H_