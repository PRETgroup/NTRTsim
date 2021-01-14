#ifndef CONNECTION2_SYNAPSE11_H_
#define CONNECTION2_SYNAPSE11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse11 States
enum Connection2Synapse11States {
    CONNECTION2_SYNAPSE11_L,
};

// connection2_synapse11 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse11States state;
} Connection2Synapse11;

// connection2_synapse11 Initialisation function
void Connection2Synapse11Init(Connection2Synapse11* me);

// connection2_synapse11 Execution function
void Connection2Synapse11Run(Connection2Synapse11* me);

#endif // CONNECTION2_SYNAPSE11_H_