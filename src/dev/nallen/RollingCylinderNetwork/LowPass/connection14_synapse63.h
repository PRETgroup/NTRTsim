#ifndef CONNECTION14_SYNAPSE63_H_
#define CONNECTION14_SYNAPSE63_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse63 States
enum Connection14Synapse63States {
    CONNECTION14_SYNAPSE63_L,
};

// connection14_synapse63 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse63States state;
} Connection14Synapse63;

// connection14_synapse63 Initialisation function
void Connection14Synapse63Init(Connection14Synapse63* me);

// connection14_synapse63 Execution function
void Connection14Synapse63Run(Connection14Synapse63* me);

#endif // CONNECTION14_SYNAPSE63_H_