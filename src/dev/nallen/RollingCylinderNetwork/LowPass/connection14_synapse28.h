#ifndef CONNECTION14_SYNAPSE28_H_
#define CONNECTION14_SYNAPSE28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse28 States
enum Connection14Synapse28States {
    CONNECTION14_SYNAPSE28_L,
};

// connection14_synapse28 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse28States state;
} Connection14Synapse28;

// connection14_synapse28 Initialisation function
void Connection14Synapse28Init(Connection14Synapse28* me);

// connection14_synapse28 Execution function
void Connection14Synapse28Run(Connection14Synapse28* me);

#endif // CONNECTION14_SYNAPSE28_H_