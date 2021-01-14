#ifndef CONNECTION14_SYNAPSE6_H_
#define CONNECTION14_SYNAPSE6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse6 States
enum Connection14Synapse6States {
    CONNECTION14_SYNAPSE6_L,
};

// connection14_synapse6 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse6States state;
} Connection14Synapse6;

// connection14_synapse6 Initialisation function
void Connection14Synapse6Init(Connection14Synapse6* me);

// connection14_synapse6 Execution function
void Connection14Synapse6Run(Connection14Synapse6* me);

#endif // CONNECTION14_SYNAPSE6_H_