#ifndef CONNECTION14_SYNAPSE85_H_
#define CONNECTION14_SYNAPSE85_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse85 States
enum Connection14Synapse85States {
    CONNECTION14_SYNAPSE85_L,
};

// connection14_synapse85 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse85States state;
} Connection14Synapse85;

// connection14_synapse85 Initialisation function
void Connection14Synapse85Init(Connection14Synapse85* me);

// connection14_synapse85 Execution function
void Connection14Synapse85Run(Connection14Synapse85* me);

#endif // CONNECTION14_SYNAPSE85_H_