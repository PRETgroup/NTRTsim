#ifndef CONNECTION14_SYNAPSE19_H_
#define CONNECTION14_SYNAPSE19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse19 States
enum Connection14Synapse19States {
    CONNECTION14_SYNAPSE19_L,
};

// connection14_synapse19 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse19States state;
} Connection14Synapse19;

// connection14_synapse19 Initialisation function
void Connection14Synapse19Init(Connection14Synapse19* me);

// connection14_synapse19 Execution function
void Connection14Synapse19Run(Connection14Synapse19* me);

#endif // CONNECTION14_SYNAPSE19_H_