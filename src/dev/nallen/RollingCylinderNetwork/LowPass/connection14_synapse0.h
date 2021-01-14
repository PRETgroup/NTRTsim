#ifndef CONNECTION14_SYNAPSE0_H_
#define CONNECTION14_SYNAPSE0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse0 States
enum Connection14Synapse0States {
    CONNECTION14_SYNAPSE0_L,
};

// connection14_synapse0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse0States state;
} Connection14Synapse0;

// connection14_synapse0 Initialisation function
void Connection14Synapse0Init(Connection14Synapse0* me);

// connection14_synapse0 Execution function
void Connection14Synapse0Run(Connection14Synapse0* me);

#endif // CONNECTION14_SYNAPSE0_H_