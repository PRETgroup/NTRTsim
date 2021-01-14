#ifndef CONNECTION14_SYNAPSE81_H_
#define CONNECTION14_SYNAPSE81_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse81 States
enum Connection14Synapse81States {
    CONNECTION14_SYNAPSE81_L,
};

// connection14_synapse81 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse81States state;
} Connection14Synapse81;

// connection14_synapse81 Initialisation function
void Connection14Synapse81Init(Connection14Synapse81* me);

// connection14_synapse81 Execution function
void Connection14Synapse81Run(Connection14Synapse81* me);

#endif // CONNECTION14_SYNAPSE81_H_