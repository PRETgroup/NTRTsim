#ifndef CONNECTION14_SYNAPSE59_H_
#define CONNECTION14_SYNAPSE59_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse59 States
enum Connection14Synapse59States {
    CONNECTION14_SYNAPSE59_L,
};

// connection14_synapse59 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse59States state;
} Connection14Synapse59;

// connection14_synapse59 Initialisation function
void Connection14Synapse59Init(Connection14Synapse59* me);

// connection14_synapse59 Execution function
void Connection14Synapse59Run(Connection14Synapse59* me);

#endif // CONNECTION14_SYNAPSE59_H_