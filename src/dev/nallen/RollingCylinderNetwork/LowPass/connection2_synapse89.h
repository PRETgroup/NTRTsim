#ifndef CONNECTION2_SYNAPSE89_H_
#define CONNECTION2_SYNAPSE89_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse89 States
enum Connection2Synapse89States {
    CONNECTION2_SYNAPSE89_L,
};

// connection2_synapse89 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse89States state;
} Connection2Synapse89;

// connection2_synapse89 Initialisation function
void Connection2Synapse89Init(Connection2Synapse89* me);

// connection2_synapse89 Execution function
void Connection2Synapse89Run(Connection2Synapse89* me);

#endif // CONNECTION2_SYNAPSE89_H_