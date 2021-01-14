#ifndef CONNECTION2_SYNAPSE79_H_
#define CONNECTION2_SYNAPSE79_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse79 States
enum Connection2Synapse79States {
    CONNECTION2_SYNAPSE79_L,
};

// connection2_synapse79 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse79States state;
} Connection2Synapse79;

// connection2_synapse79 Initialisation function
void Connection2Synapse79Init(Connection2Synapse79* me);

// connection2_synapse79 Execution function
void Connection2Synapse79Run(Connection2Synapse79* me);

#endif // CONNECTION2_SYNAPSE79_H_