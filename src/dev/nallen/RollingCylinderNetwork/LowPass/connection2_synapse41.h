#ifndef CONNECTION2_SYNAPSE41_H_
#define CONNECTION2_SYNAPSE41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse41 States
enum Connection2Synapse41States {
    CONNECTION2_SYNAPSE41_L,
};

// connection2_synapse41 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse41States state;
} Connection2Synapse41;

// connection2_synapse41 Initialisation function
void Connection2Synapse41Init(Connection2Synapse41* me);

// connection2_synapse41 Execution function
void Connection2Synapse41Run(Connection2Synapse41* me);

#endif // CONNECTION2_SYNAPSE41_H_