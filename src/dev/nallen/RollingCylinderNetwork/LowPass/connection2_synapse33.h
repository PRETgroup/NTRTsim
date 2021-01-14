#ifndef CONNECTION2_SYNAPSE33_H_
#define CONNECTION2_SYNAPSE33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse33 States
enum Connection2Synapse33States {
    CONNECTION2_SYNAPSE33_L,
};

// connection2_synapse33 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse33States state;
} Connection2Synapse33;

// connection2_synapse33 Initialisation function
void Connection2Synapse33Init(Connection2Synapse33* me);

// connection2_synapse33 Execution function
void Connection2Synapse33Run(Connection2Synapse33* me);

#endif // CONNECTION2_SYNAPSE33_H_