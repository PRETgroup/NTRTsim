#ifndef CONNECTION14_SYNAPSE4_H_
#define CONNECTION14_SYNAPSE4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse4 States
enum Connection14Synapse4States {
    CONNECTION14_SYNAPSE4_L,
};

// connection14_synapse4 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse4States state;
} Connection14Synapse4;

// connection14_synapse4 Initialisation function
void Connection14Synapse4Init(Connection14Synapse4* me);

// connection14_synapse4 Execution function
void Connection14Synapse4Run(Connection14Synapse4* me);

#endif // CONNECTION14_SYNAPSE4_H_