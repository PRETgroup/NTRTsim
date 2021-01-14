#ifndef CONNECTION2_SYNAPSE43_H_
#define CONNECTION2_SYNAPSE43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse43 States
enum Connection2Synapse43States {
    CONNECTION2_SYNAPSE43_L,
};

// connection2_synapse43 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse43States state;
} Connection2Synapse43;

// connection2_synapse43 Initialisation function
void Connection2Synapse43Init(Connection2Synapse43* me);

// connection2_synapse43 Execution function
void Connection2Synapse43Run(Connection2Synapse43* me);

#endif // CONNECTION2_SYNAPSE43_H_