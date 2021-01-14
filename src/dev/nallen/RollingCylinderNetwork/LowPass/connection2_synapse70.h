#ifndef CONNECTION2_SYNAPSE70_H_
#define CONNECTION2_SYNAPSE70_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse70 States
enum Connection2Synapse70States {
    CONNECTION2_SYNAPSE70_L,
};

// connection2_synapse70 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse70States state;
} Connection2Synapse70;

// connection2_synapse70 Initialisation function
void Connection2Synapse70Init(Connection2Synapse70* me);

// connection2_synapse70 Execution function
void Connection2Synapse70Run(Connection2Synapse70* me);

#endif // CONNECTION2_SYNAPSE70_H_