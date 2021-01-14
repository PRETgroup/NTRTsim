#ifndef CONNECTION14_SYNAPSE29_H_
#define CONNECTION14_SYNAPSE29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse29 States
enum Connection14Synapse29States {
    CONNECTION14_SYNAPSE29_L,
};

// connection14_synapse29 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse29States state;
} Connection14Synapse29;

// connection14_synapse29 Initialisation function
void Connection14Synapse29Init(Connection14Synapse29* me);

// connection14_synapse29 Execution function
void Connection14Synapse29Run(Connection14Synapse29* me);

#endif // CONNECTION14_SYNAPSE29_H_