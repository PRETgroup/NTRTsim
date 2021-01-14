#ifndef CONNECTION14_SYNAPSE47_H_
#define CONNECTION14_SYNAPSE47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse47 States
enum Connection14Synapse47States {
    CONNECTION14_SYNAPSE47_L,
};

// connection14_synapse47 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse47States state;
} Connection14Synapse47;

// connection14_synapse47 Initialisation function
void Connection14Synapse47Init(Connection14Synapse47* me);

// connection14_synapse47 Execution function
void Connection14Synapse47Run(Connection14Synapse47* me);

#endif // CONNECTION14_SYNAPSE47_H_