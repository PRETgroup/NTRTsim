#ifndef CONNECTION14_SYNAPSE26_H_
#define CONNECTION14_SYNAPSE26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse26 States
enum Connection14Synapse26States {
    CONNECTION14_SYNAPSE26_L,
};

// connection14_synapse26 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse26States state;
} Connection14Synapse26;

// connection14_synapse26 Initialisation function
void Connection14Synapse26Init(Connection14Synapse26* me);

// connection14_synapse26 Execution function
void Connection14Synapse26Run(Connection14Synapse26* me);

#endif // CONNECTION14_SYNAPSE26_H_