#ifndef CONNECTION2_SYNAPSE80_H_
#define CONNECTION2_SYNAPSE80_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse80 States
enum Connection2Synapse80States {
    CONNECTION2_SYNAPSE80_L,
};

// connection2_synapse80 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse80States state;
} Connection2Synapse80;

// connection2_synapse80 Initialisation function
void Connection2Synapse80Init(Connection2Synapse80* me);

// connection2_synapse80 Execution function
void Connection2Synapse80Run(Connection2Synapse80* me);

#endif // CONNECTION2_SYNAPSE80_H_