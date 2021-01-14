#ifndef CONNECTION6_SYNAPSE16_H_
#define CONNECTION6_SYNAPSE16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse16 States
enum Connection6Synapse16States {
    CONNECTION6_SYNAPSE16_L,
};

// connection6_synapse16 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse16States state;
} Connection6Synapse16;

// connection6_synapse16 Initialisation function
void Connection6Synapse16Init(Connection6Synapse16* me);

// connection6_synapse16 Execution function
void Connection6Synapse16Run(Connection6Synapse16* me);

#endif // CONNECTION6_SYNAPSE16_H_