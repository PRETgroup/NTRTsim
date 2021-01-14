#ifndef CONNECTION2_SYNAPSE38_H_
#define CONNECTION2_SYNAPSE38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse38 States
enum Connection2Synapse38States {
    CONNECTION2_SYNAPSE38_L,
};

// connection2_synapse38 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse38States state;
} Connection2Synapse38;

// connection2_synapse38 Initialisation function
void Connection2Synapse38Init(Connection2Synapse38* me);

// connection2_synapse38 Execution function
void Connection2Synapse38Run(Connection2Synapse38* me);

#endif // CONNECTION2_SYNAPSE38_H_