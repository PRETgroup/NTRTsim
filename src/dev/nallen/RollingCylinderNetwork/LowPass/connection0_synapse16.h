#ifndef CONNECTION0_SYNAPSE16_H_
#define CONNECTION0_SYNAPSE16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse16 States
enum Connection0Synapse16States {
    CONNECTION0_SYNAPSE16_L,
};

// connection0_synapse16 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse16States state;
} Connection0Synapse16;

// connection0_synapse16 Initialisation function
void Connection0Synapse16Init(Connection0Synapse16* me);

// connection0_synapse16 Execution function
void Connection0Synapse16Run(Connection0Synapse16* me);

#endif // CONNECTION0_SYNAPSE16_H_