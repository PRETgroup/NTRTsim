#ifndef CONNECTION14_SYNAPSE76_H_
#define CONNECTION14_SYNAPSE76_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse76 States
enum Connection14Synapse76States {
    CONNECTION14_SYNAPSE76_L,
};

// connection14_synapse76 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse76States state;
} Connection14Synapse76;

// connection14_synapse76 Initialisation function
void Connection14Synapse76Init(Connection14Synapse76* me);

// connection14_synapse76 Execution function
void Connection14Synapse76Run(Connection14Synapse76* me);

#endif // CONNECTION14_SYNAPSE76_H_