#ifndef CONNECTION2_SYNAPSE18_H_
#define CONNECTION2_SYNAPSE18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse18 States
enum Connection2Synapse18States {
    CONNECTION2_SYNAPSE18_L,
};

// connection2_synapse18 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse18States state;
} Connection2Synapse18;

// connection2_synapse18 Initialisation function
void Connection2Synapse18Init(Connection2Synapse18* me);

// connection2_synapse18 Execution function
void Connection2Synapse18Run(Connection2Synapse18* me);

#endif // CONNECTION2_SYNAPSE18_H_