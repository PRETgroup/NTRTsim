#ifndef CONNECTION14_SYNAPSE77_H_
#define CONNECTION14_SYNAPSE77_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse77 States
enum Connection14Synapse77States {
    CONNECTION14_SYNAPSE77_L,
};

// connection14_synapse77 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse77States state;
} Connection14Synapse77;

// connection14_synapse77 Initialisation function
void Connection14Synapse77Init(Connection14Synapse77* me);

// connection14_synapse77 Execution function
void Connection14Synapse77Run(Connection14Synapse77* me);

#endif // CONNECTION14_SYNAPSE77_H_