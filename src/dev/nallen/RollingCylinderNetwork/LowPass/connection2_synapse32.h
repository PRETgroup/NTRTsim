#ifndef CONNECTION2_SYNAPSE32_H_
#define CONNECTION2_SYNAPSE32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse32 States
enum Connection2Synapse32States {
    CONNECTION2_SYNAPSE32_L,
};

// connection2_synapse32 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse32States state;
} Connection2Synapse32;

// connection2_synapse32 Initialisation function
void Connection2Synapse32Init(Connection2Synapse32* me);

// connection2_synapse32 Execution function
void Connection2Synapse32Run(Connection2Synapse32* me);

#endif // CONNECTION2_SYNAPSE32_H_