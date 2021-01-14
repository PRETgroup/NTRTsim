#ifndef CONNECTION2_SYNAPSE34_H_
#define CONNECTION2_SYNAPSE34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse34 States
enum Connection2Synapse34States {
    CONNECTION2_SYNAPSE34_L,
};

// connection2_synapse34 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse34States state;
} Connection2Synapse34;

// connection2_synapse34 Initialisation function
void Connection2Synapse34Init(Connection2Synapse34* me);

// connection2_synapse34 Execution function
void Connection2Synapse34Run(Connection2Synapse34* me);

#endif // CONNECTION2_SYNAPSE34_H_