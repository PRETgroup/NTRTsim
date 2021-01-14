#ifndef CONNECTION2_SYNAPSE24_H_
#define CONNECTION2_SYNAPSE24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse24 States
enum Connection2Synapse24States {
    CONNECTION2_SYNAPSE24_L,
};

// connection2_synapse24 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse24States state;
} Connection2Synapse24;

// connection2_synapse24 Initialisation function
void Connection2Synapse24Init(Connection2Synapse24* me);

// connection2_synapse24 Execution function
void Connection2Synapse24Run(Connection2Synapse24* me);

#endif // CONNECTION2_SYNAPSE24_H_