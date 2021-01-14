#ifndef CONNECTION14_SYNAPSE42_H_
#define CONNECTION14_SYNAPSE42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse42 States
enum Connection14Synapse42States {
    CONNECTION14_SYNAPSE42_L,
};

// connection14_synapse42 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse42States state;
} Connection14Synapse42;

// connection14_synapse42 Initialisation function
void Connection14Synapse42Init(Connection14Synapse42* me);

// connection14_synapse42 Execution function
void Connection14Synapse42Run(Connection14Synapse42* me);

#endif // CONNECTION14_SYNAPSE42_H_