#ifndef CONNECTION14_SYNAPSE91_H_
#define CONNECTION14_SYNAPSE91_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse91 States
enum Connection14Synapse91States {
    CONNECTION14_SYNAPSE91_L,
};

// connection14_synapse91 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse91States state;
} Connection14Synapse91;

// connection14_synapse91 Initialisation function
void Connection14Synapse91Init(Connection14Synapse91* me);

// connection14_synapse91 Execution function
void Connection14Synapse91Run(Connection14Synapse91* me);

#endif // CONNECTION14_SYNAPSE91_H_