#ifndef CONNECTION14_SYNAPSE36_H_
#define CONNECTION14_SYNAPSE36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse36 States
enum Connection14Synapse36States {
    CONNECTION14_SYNAPSE36_L,
};

// connection14_synapse36 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse36States state;
} Connection14Synapse36;

// connection14_synapse36 Initialisation function
void Connection14Synapse36Init(Connection14Synapse36* me);

// connection14_synapse36 Execution function
void Connection14Synapse36Run(Connection14Synapse36* me);

#endif // CONNECTION14_SYNAPSE36_H_