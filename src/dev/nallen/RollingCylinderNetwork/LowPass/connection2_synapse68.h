#ifndef CONNECTION2_SYNAPSE68_H_
#define CONNECTION2_SYNAPSE68_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse68 States
enum Connection2Synapse68States {
    CONNECTION2_SYNAPSE68_L,
};

// connection2_synapse68 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse68States state;
} Connection2Synapse68;

// connection2_synapse68 Initialisation function
void Connection2Synapse68Init(Connection2Synapse68* me);

// connection2_synapse68 Execution function
void Connection2Synapse68Run(Connection2Synapse68* me);

#endif // CONNECTION2_SYNAPSE68_H_