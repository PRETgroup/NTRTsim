#ifndef CONNECTION2_SYNAPSE9_H_
#define CONNECTION2_SYNAPSE9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse9 States
enum Connection2Synapse9States {
    CONNECTION2_SYNAPSE9_L,
};

// connection2_synapse9 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse9States state;
} Connection2Synapse9;

// connection2_synapse9 Initialisation function
void Connection2Synapse9Init(Connection2Synapse9* me);

// connection2_synapse9 Execution function
void Connection2Synapse9Run(Connection2Synapse9* me);

#endif // CONNECTION2_SYNAPSE9_H_