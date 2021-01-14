#ifndef CONNECTION14_SYNAPSE55_H_
#define CONNECTION14_SYNAPSE55_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse55 States
enum Connection14Synapse55States {
    CONNECTION14_SYNAPSE55_L,
};

// connection14_synapse55 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse55States state;
} Connection14Synapse55;

// connection14_synapse55 Initialisation function
void Connection14Synapse55Init(Connection14Synapse55* me);

// connection14_synapse55 Execution function
void Connection14Synapse55Run(Connection14Synapse55* me);

#endif // CONNECTION14_SYNAPSE55_H_