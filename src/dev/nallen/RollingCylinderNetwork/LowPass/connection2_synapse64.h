#ifndef CONNECTION2_SYNAPSE64_H_
#define CONNECTION2_SYNAPSE64_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse64 States
enum Connection2Synapse64States {
    CONNECTION2_SYNAPSE64_L,
};

// connection2_synapse64 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse64States state;
} Connection2Synapse64;

// connection2_synapse64 Initialisation function
void Connection2Synapse64Init(Connection2Synapse64* me);

// connection2_synapse64 Execution function
void Connection2Synapse64Run(Connection2Synapse64* me);

#endif // CONNECTION2_SYNAPSE64_H_