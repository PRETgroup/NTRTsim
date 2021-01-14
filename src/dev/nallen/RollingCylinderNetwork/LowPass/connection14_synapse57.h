#ifndef CONNECTION14_SYNAPSE57_H_
#define CONNECTION14_SYNAPSE57_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse57 States
enum Connection14Synapse57States {
    CONNECTION14_SYNAPSE57_L,
};

// connection14_synapse57 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse57States state;
} Connection14Synapse57;

// connection14_synapse57 Initialisation function
void Connection14Synapse57Init(Connection14Synapse57* me);

// connection14_synapse57 Execution function
void Connection14Synapse57Run(Connection14Synapse57* me);

#endif // CONNECTION14_SYNAPSE57_H_