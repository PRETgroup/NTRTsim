#ifndef CONNECTION14_SYNAPSE92_H_
#define CONNECTION14_SYNAPSE92_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse92 States
enum Connection14Synapse92States {
    CONNECTION14_SYNAPSE92_L,
};

// connection14_synapse92 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse92States state;
} Connection14Synapse92;

// connection14_synapse92 Initialisation function
void Connection14Synapse92Init(Connection14Synapse92* me);

// connection14_synapse92 Execution function
void Connection14Synapse92Run(Connection14Synapse92* me);

#endif // CONNECTION14_SYNAPSE92_H_