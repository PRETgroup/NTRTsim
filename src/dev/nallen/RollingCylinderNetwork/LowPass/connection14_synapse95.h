#ifndef CONNECTION14_SYNAPSE95_H_
#define CONNECTION14_SYNAPSE95_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse95 States
enum Connection14Synapse95States {
    CONNECTION14_SYNAPSE95_L,
};

// connection14_synapse95 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse95States state;
} Connection14Synapse95;

// connection14_synapse95 Initialisation function
void Connection14Synapse95Init(Connection14Synapse95* me);

// connection14_synapse95 Execution function
void Connection14Synapse95Run(Connection14Synapse95* me);

#endif // CONNECTION14_SYNAPSE95_H_