#ifndef CONNECTION14_SYNAPSE93_H_
#define CONNECTION14_SYNAPSE93_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse93 States
enum Connection14Synapse93States {
    CONNECTION14_SYNAPSE93_L,
};

// connection14_synapse93 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse93States state;
} Connection14Synapse93;

// connection14_synapse93 Initialisation function
void Connection14Synapse93Init(Connection14Synapse93* me);

// connection14_synapse93 Execution function
void Connection14Synapse93Run(Connection14Synapse93* me);

#endif // CONNECTION14_SYNAPSE93_H_