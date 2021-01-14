#ifndef CONNECTION2_SYNAPSE73_H_
#define CONNECTION2_SYNAPSE73_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse73 States
enum Connection2Synapse73States {
    CONNECTION2_SYNAPSE73_L,
};

// connection2_synapse73 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse73States state;
} Connection2Synapse73;

// connection2_synapse73 Initialisation function
void Connection2Synapse73Init(Connection2Synapse73* me);

// connection2_synapse73 Execution function
void Connection2Synapse73Run(Connection2Synapse73* me);

#endif // CONNECTION2_SYNAPSE73_H_