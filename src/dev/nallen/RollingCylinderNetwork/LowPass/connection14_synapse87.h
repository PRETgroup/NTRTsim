#ifndef CONNECTION14_SYNAPSE87_H_
#define CONNECTION14_SYNAPSE87_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse87 States
enum Connection14Synapse87States {
    CONNECTION14_SYNAPSE87_L,
};

// connection14_synapse87 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse87States state;
} Connection14Synapse87;

// connection14_synapse87 Initialisation function
void Connection14Synapse87Init(Connection14Synapse87* me);

// connection14_synapse87 Execution function
void Connection14Synapse87Run(Connection14Synapse87* me);

#endif // CONNECTION14_SYNAPSE87_H_