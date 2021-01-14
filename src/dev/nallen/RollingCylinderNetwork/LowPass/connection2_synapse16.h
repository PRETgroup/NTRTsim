#ifndef CONNECTION2_SYNAPSE16_H_
#define CONNECTION2_SYNAPSE16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse16 States
enum Connection2Synapse16States {
    CONNECTION2_SYNAPSE16_L,
};

// connection2_synapse16 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse16States state;
} Connection2Synapse16;

// connection2_synapse16 Initialisation function
void Connection2Synapse16Init(Connection2Synapse16* me);

// connection2_synapse16 Execution function
void Connection2Synapse16Run(Connection2Synapse16* me);

#endif // CONNECTION2_SYNAPSE16_H_