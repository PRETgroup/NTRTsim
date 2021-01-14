#ifndef CONNECTION14_SYNAPSE17_H_
#define CONNECTION14_SYNAPSE17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse17 States
enum Connection14Synapse17States {
    CONNECTION14_SYNAPSE17_L,
};

// connection14_synapse17 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse17States state;
} Connection14Synapse17;

// connection14_synapse17 Initialisation function
void Connection14Synapse17Init(Connection14Synapse17* me);

// connection14_synapse17 Execution function
void Connection14Synapse17Run(Connection14Synapse17* me);

#endif // CONNECTION14_SYNAPSE17_H_