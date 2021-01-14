#ifndef CONNECTION2_SYNAPSE5_H_
#define CONNECTION2_SYNAPSE5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse5 States
enum Connection2Synapse5States {
    CONNECTION2_SYNAPSE5_L,
};

// connection2_synapse5 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse5States state;
} Connection2Synapse5;

// connection2_synapse5 Initialisation function
void Connection2Synapse5Init(Connection2Synapse5* me);

// connection2_synapse5 Execution function
void Connection2Synapse5Run(Connection2Synapse5* me);

#endif // CONNECTION2_SYNAPSE5_H_