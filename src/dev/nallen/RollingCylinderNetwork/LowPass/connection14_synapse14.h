#ifndef CONNECTION14_SYNAPSE14_H_
#define CONNECTION14_SYNAPSE14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse14 States
enum Connection14Synapse14States {
    CONNECTION14_SYNAPSE14_L,
};

// connection14_synapse14 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse14States state;
} Connection14Synapse14;

// connection14_synapse14 Initialisation function
void Connection14Synapse14Init(Connection14Synapse14* me);

// connection14_synapse14 Execution function
void Connection14Synapse14Run(Connection14Synapse14* me);

#endif // CONNECTION14_SYNAPSE14_H_