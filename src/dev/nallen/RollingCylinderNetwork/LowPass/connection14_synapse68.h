#ifndef CONNECTION14_SYNAPSE68_H_
#define CONNECTION14_SYNAPSE68_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse68 States
enum Connection14Synapse68States {
    CONNECTION14_SYNAPSE68_L,
};

// connection14_synapse68 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse68States state;
} Connection14Synapse68;

// connection14_synapse68 Initialisation function
void Connection14Synapse68Init(Connection14Synapse68* me);

// connection14_synapse68 Execution function
void Connection14Synapse68Run(Connection14Synapse68* me);

#endif // CONNECTION14_SYNAPSE68_H_