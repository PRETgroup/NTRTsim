#ifndef CONNECTION2_SYNAPSE88_H_
#define CONNECTION2_SYNAPSE88_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse88 States
enum Connection2Synapse88States {
    CONNECTION2_SYNAPSE88_L,
};

// connection2_synapse88 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse88States state;
} Connection2Synapse88;

// connection2_synapse88 Initialisation function
void Connection2Synapse88Init(Connection2Synapse88* me);

// connection2_synapse88 Execution function
void Connection2Synapse88Run(Connection2Synapse88* me);

#endif // CONNECTION2_SYNAPSE88_H_