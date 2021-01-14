#ifndef CONNECTION14_SYNAPSE61_H_
#define CONNECTION14_SYNAPSE61_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse61 States
enum Connection14Synapse61States {
    CONNECTION14_SYNAPSE61_L,
};

// connection14_synapse61 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse61States state;
} Connection14Synapse61;

// connection14_synapse61 Initialisation function
void Connection14Synapse61Init(Connection14Synapse61* me);

// connection14_synapse61 Execution function
void Connection14Synapse61Run(Connection14Synapse61* me);

#endif // CONNECTION14_SYNAPSE61_H_