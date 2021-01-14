#ifndef CONNECTION2_SYNAPSE53_H_
#define CONNECTION2_SYNAPSE53_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse53 States
enum Connection2Synapse53States {
    CONNECTION2_SYNAPSE53_L,
};

// connection2_synapse53 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse53States state;
} Connection2Synapse53;

// connection2_synapse53 Initialisation function
void Connection2Synapse53Init(Connection2Synapse53* me);

// connection2_synapse53 Execution function
void Connection2Synapse53Run(Connection2Synapse53* me);

#endif // CONNECTION2_SYNAPSE53_H_