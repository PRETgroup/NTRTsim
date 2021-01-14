#ifndef CONNECTION14_SYNAPSE46_H_
#define CONNECTION14_SYNAPSE46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse46 States
enum Connection14Synapse46States {
    CONNECTION14_SYNAPSE46_L,
};

// connection14_synapse46 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse46States state;
} Connection14Synapse46;

// connection14_synapse46 Initialisation function
void Connection14Synapse46Init(Connection14Synapse46* me);

// connection14_synapse46 Execution function
void Connection14Synapse46Run(Connection14Synapse46* me);

#endif // CONNECTION14_SYNAPSE46_H_