#ifndef CONNECTION14_SYNAPSE74_H_
#define CONNECTION14_SYNAPSE74_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse74 States
enum Connection14Synapse74States {
    CONNECTION14_SYNAPSE74_L,
};

// connection14_synapse74 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse74States state;
} Connection14Synapse74;

// connection14_synapse74 Initialisation function
void Connection14Synapse74Init(Connection14Synapse74* me);

// connection14_synapse74 Execution function
void Connection14Synapse74Run(Connection14Synapse74* me);

#endif // CONNECTION14_SYNAPSE74_H_