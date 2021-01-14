#ifndef CONNECTION14_SYNAPSE13_H_
#define CONNECTION14_SYNAPSE13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse13 States
enum Connection14Synapse13States {
    CONNECTION14_SYNAPSE13_L,
};

// connection14_synapse13 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse13States state;
} Connection14Synapse13;

// connection14_synapse13 Initialisation function
void Connection14Synapse13Init(Connection14Synapse13* me);

// connection14_synapse13 Execution function
void Connection14Synapse13Run(Connection14Synapse13* me);

#endif // CONNECTION14_SYNAPSE13_H_