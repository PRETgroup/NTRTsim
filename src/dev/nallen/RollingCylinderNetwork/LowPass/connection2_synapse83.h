#ifndef CONNECTION2_SYNAPSE83_H_
#define CONNECTION2_SYNAPSE83_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse83 States
enum Connection2Synapse83States {
    CONNECTION2_SYNAPSE83_L,
};

// connection2_synapse83 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse83States state;
} Connection2Synapse83;

// connection2_synapse83 Initialisation function
void Connection2Synapse83Init(Connection2Synapse83* me);

// connection2_synapse83 Execution function
void Connection2Synapse83Run(Connection2Synapse83* me);

#endif // CONNECTION2_SYNAPSE83_H_