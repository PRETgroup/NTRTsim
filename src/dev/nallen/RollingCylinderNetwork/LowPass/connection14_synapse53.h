#ifndef CONNECTION14_SYNAPSE53_H_
#define CONNECTION14_SYNAPSE53_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse53 States
enum Connection14Synapse53States {
    CONNECTION14_SYNAPSE53_L,
};

// connection14_synapse53 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse53States state;
} Connection14Synapse53;

// connection14_synapse53 Initialisation function
void Connection14Synapse53Init(Connection14Synapse53* me);

// connection14_synapse53 Execution function
void Connection14Synapse53Run(Connection14Synapse53* me);

#endif // CONNECTION14_SYNAPSE53_H_