#ifndef CONNECTION2_SYNAPSE7_H_
#define CONNECTION2_SYNAPSE7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse7 States
enum Connection2Synapse7States {
    CONNECTION2_SYNAPSE7_L,
};

// connection2_synapse7 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse7States state;
} Connection2Synapse7;

// connection2_synapse7 Initialisation function
void Connection2Synapse7Init(Connection2Synapse7* me);

// connection2_synapse7 Execution function
void Connection2Synapse7Run(Connection2Synapse7* me);

#endif // CONNECTION2_SYNAPSE7_H_