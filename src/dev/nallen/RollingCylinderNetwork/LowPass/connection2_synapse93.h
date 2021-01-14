#ifndef CONNECTION2_SYNAPSE93_H_
#define CONNECTION2_SYNAPSE93_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse93 States
enum Connection2Synapse93States {
    CONNECTION2_SYNAPSE93_L,
};

// connection2_synapse93 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse93States state;
} Connection2Synapse93;

// connection2_synapse93 Initialisation function
void Connection2Synapse93Init(Connection2Synapse93* me);

// connection2_synapse93 Execution function
void Connection2Synapse93Run(Connection2Synapse93* me);

#endif // CONNECTION2_SYNAPSE93_H_