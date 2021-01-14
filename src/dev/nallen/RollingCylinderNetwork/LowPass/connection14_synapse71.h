#ifndef CONNECTION14_SYNAPSE71_H_
#define CONNECTION14_SYNAPSE71_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse71 States
enum Connection14Synapse71States {
    CONNECTION14_SYNAPSE71_L,
};

// connection14_synapse71 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse71States state;
} Connection14Synapse71;

// connection14_synapse71 Initialisation function
void Connection14Synapse71Init(Connection14Synapse71* me);

// connection14_synapse71 Execution function
void Connection14Synapse71Run(Connection14Synapse71* me);

#endif // CONNECTION14_SYNAPSE71_H_