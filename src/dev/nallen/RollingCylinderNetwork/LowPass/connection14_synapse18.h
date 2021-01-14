#ifndef CONNECTION14_SYNAPSE18_H_
#define CONNECTION14_SYNAPSE18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse18 States
enum Connection14Synapse18States {
    CONNECTION14_SYNAPSE18_L,
};

// connection14_synapse18 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse18States state;
} Connection14Synapse18;

// connection14_synapse18 Initialisation function
void Connection14Synapse18Init(Connection14Synapse18* me);

// connection14_synapse18 Execution function
void Connection14Synapse18Run(Connection14Synapse18* me);

#endif // CONNECTION14_SYNAPSE18_H_