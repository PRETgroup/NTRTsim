#ifndef CONNECTION2_SYNAPSE48_H_
#define CONNECTION2_SYNAPSE48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse48 States
enum Connection2Synapse48States {
    CONNECTION2_SYNAPSE48_L,
};

// connection2_synapse48 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse48States state;
} Connection2Synapse48;

// connection2_synapse48 Initialisation function
void Connection2Synapse48Init(Connection2Synapse48* me);

// connection2_synapse48 Execution function
void Connection2Synapse48Run(Connection2Synapse48* me);

#endif // CONNECTION2_SYNAPSE48_H_