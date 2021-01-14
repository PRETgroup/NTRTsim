#ifndef CONNECTION14_SYNAPSE73_H_
#define CONNECTION14_SYNAPSE73_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse73 States
enum Connection14Synapse73States {
    CONNECTION14_SYNAPSE73_L,
};

// connection14_synapse73 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse73States state;
} Connection14Synapse73;

// connection14_synapse73 Initialisation function
void Connection14Synapse73Init(Connection14Synapse73* me);

// connection14_synapse73 Execution function
void Connection14Synapse73Run(Connection14Synapse73* me);

#endif // CONNECTION14_SYNAPSE73_H_