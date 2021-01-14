#ifndef CONNECTION2_SYNAPSE47_H_
#define CONNECTION2_SYNAPSE47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse47 States
enum Connection2Synapse47States {
    CONNECTION2_SYNAPSE47_L,
};

// connection2_synapse47 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse47States state;
} Connection2Synapse47;

// connection2_synapse47 Initialisation function
void Connection2Synapse47Init(Connection2Synapse47* me);

// connection2_synapse47 Execution function
void Connection2Synapse47Run(Connection2Synapse47* me);

#endif // CONNECTION2_SYNAPSE47_H_