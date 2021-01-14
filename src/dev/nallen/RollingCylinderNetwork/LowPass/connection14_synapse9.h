#ifndef CONNECTION14_SYNAPSE9_H_
#define CONNECTION14_SYNAPSE9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse9 States
enum Connection14Synapse9States {
    CONNECTION14_SYNAPSE9_L,
};

// connection14_synapse9 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse9States state;
} Connection14Synapse9;

// connection14_synapse9 Initialisation function
void Connection14Synapse9Init(Connection14Synapse9* me);

// connection14_synapse9 Execution function
void Connection14Synapse9Run(Connection14Synapse9* me);

#endif // CONNECTION14_SYNAPSE9_H_