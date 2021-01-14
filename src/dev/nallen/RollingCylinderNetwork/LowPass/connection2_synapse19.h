#ifndef CONNECTION2_SYNAPSE19_H_
#define CONNECTION2_SYNAPSE19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse19 States
enum Connection2Synapse19States {
    CONNECTION2_SYNAPSE19_L,
};

// connection2_synapse19 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse19States state;
} Connection2Synapse19;

// connection2_synapse19 Initialisation function
void Connection2Synapse19Init(Connection2Synapse19* me);

// connection2_synapse19 Execution function
void Connection2Synapse19Run(Connection2Synapse19* me);

#endif // CONNECTION2_SYNAPSE19_H_