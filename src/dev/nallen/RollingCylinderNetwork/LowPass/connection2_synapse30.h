#ifndef CONNECTION2_SYNAPSE30_H_
#define CONNECTION2_SYNAPSE30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse30 States
enum Connection2Synapse30States {
    CONNECTION2_SYNAPSE30_L,
};

// connection2_synapse30 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse30States state;
} Connection2Synapse30;

// connection2_synapse30 Initialisation function
void Connection2Synapse30Init(Connection2Synapse30* me);

// connection2_synapse30 Execution function
void Connection2Synapse30Run(Connection2Synapse30* me);

#endif // CONNECTION2_SYNAPSE30_H_