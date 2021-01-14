#ifndef CONNECTION14_SYNAPSE16_H_
#define CONNECTION14_SYNAPSE16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse16 States
enum Connection14Synapse16States {
    CONNECTION14_SYNAPSE16_L,
};

// connection14_synapse16 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse16States state;
} Connection14Synapse16;

// connection14_synapse16 Initialisation function
void Connection14Synapse16Init(Connection14Synapse16* me);

// connection14_synapse16 Execution function
void Connection14Synapse16Run(Connection14Synapse16* me);

#endif // CONNECTION14_SYNAPSE16_H_