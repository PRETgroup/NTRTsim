#ifndef CONNECTION2_SYNAPSE49_H_
#define CONNECTION2_SYNAPSE49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse49 States
enum Connection2Synapse49States {
    CONNECTION2_SYNAPSE49_L,
};

// connection2_synapse49 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse49States state;
} Connection2Synapse49;

// connection2_synapse49 Initialisation function
void Connection2Synapse49Init(Connection2Synapse49* me);

// connection2_synapse49 Execution function
void Connection2Synapse49Run(Connection2Synapse49* me);

#endif // CONNECTION2_SYNAPSE49_H_