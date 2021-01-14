#ifndef CONNECTION14_SYNAPSE2_H_
#define CONNECTION14_SYNAPSE2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse2 States
enum Connection14Synapse2States {
    CONNECTION14_SYNAPSE2_L,
};

// connection14_synapse2 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse2States state;
} Connection14Synapse2;

// connection14_synapse2 Initialisation function
void Connection14Synapse2Init(Connection14Synapse2* me);

// connection14_synapse2 Execution function
void Connection14Synapse2Run(Connection14Synapse2* me);

#endif // CONNECTION14_SYNAPSE2_H_