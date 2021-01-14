#ifndef CONNECTION14_SYNAPSE33_H_
#define CONNECTION14_SYNAPSE33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse33 States
enum Connection14Synapse33States {
    CONNECTION14_SYNAPSE33_L,
};

// connection14_synapse33 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse33States state;
} Connection14Synapse33;

// connection14_synapse33 Initialisation function
void Connection14Synapse33Init(Connection14Synapse33* me);

// connection14_synapse33 Execution function
void Connection14Synapse33Run(Connection14Synapse33* me);

#endif // CONNECTION14_SYNAPSE33_H_