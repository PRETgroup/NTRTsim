#ifndef CONNECTION14_SYNAPSE10_H_
#define CONNECTION14_SYNAPSE10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse10 States
enum Connection14Synapse10States {
    CONNECTION14_SYNAPSE10_L,
};

// connection14_synapse10 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse10States state;
} Connection14Synapse10;

// connection14_synapse10 Initialisation function
void Connection14Synapse10Init(Connection14Synapse10* me);

// connection14_synapse10 Execution function
void Connection14Synapse10Run(Connection14Synapse10* me);

#endif // CONNECTION14_SYNAPSE10_H_