#ifndef CONNECTION14_SYNAPSE15_H_
#define CONNECTION14_SYNAPSE15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse15 States
enum Connection14Synapse15States {
    CONNECTION14_SYNAPSE15_L,
};

// connection14_synapse15 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse15States state;
} Connection14Synapse15;

// connection14_synapse15 Initialisation function
void Connection14Synapse15Init(Connection14Synapse15* me);

// connection14_synapse15 Execution function
void Connection14Synapse15Run(Connection14Synapse15* me);

#endif // CONNECTION14_SYNAPSE15_H_