#ifndef CONNECTION2_SYNAPSE36_H_
#define CONNECTION2_SYNAPSE36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse36 States
enum Connection2Synapse36States {
    CONNECTION2_SYNAPSE36_L,
};

// connection2_synapse36 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse36States state;
} Connection2Synapse36;

// connection2_synapse36 Initialisation function
void Connection2Synapse36Init(Connection2Synapse36* me);

// connection2_synapse36 Execution function
void Connection2Synapse36Run(Connection2Synapse36* me);

#endif // CONNECTION2_SYNAPSE36_H_