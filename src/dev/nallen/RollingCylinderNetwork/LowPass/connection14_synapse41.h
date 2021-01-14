#ifndef CONNECTION14_SYNAPSE41_H_
#define CONNECTION14_SYNAPSE41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse41 States
enum Connection14Synapse41States {
    CONNECTION14_SYNAPSE41_L,
};

// connection14_synapse41 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse41States state;
} Connection14Synapse41;

// connection14_synapse41 Initialisation function
void Connection14Synapse41Init(Connection14Synapse41* me);

// connection14_synapse41 Execution function
void Connection14Synapse41Run(Connection14Synapse41* me);

#endif // CONNECTION14_SYNAPSE41_H_