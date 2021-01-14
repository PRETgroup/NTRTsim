#ifndef CONNECTION14_SYNAPSE80_H_
#define CONNECTION14_SYNAPSE80_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse80 States
enum Connection14Synapse80States {
    CONNECTION14_SYNAPSE80_L,
};

// connection14_synapse80 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse80States state;
} Connection14Synapse80;

// connection14_synapse80 Initialisation function
void Connection14Synapse80Init(Connection14Synapse80* me);

// connection14_synapse80 Execution function
void Connection14Synapse80Run(Connection14Synapse80* me);

#endif // CONNECTION14_SYNAPSE80_H_