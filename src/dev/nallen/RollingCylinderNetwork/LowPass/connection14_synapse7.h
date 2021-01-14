#ifndef CONNECTION14_SYNAPSE7_H_
#define CONNECTION14_SYNAPSE7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse7 States
enum Connection14Synapse7States {
    CONNECTION14_SYNAPSE7_L,
};

// connection14_synapse7 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse7States state;
} Connection14Synapse7;

// connection14_synapse7 Initialisation function
void Connection14Synapse7Init(Connection14Synapse7* me);

// connection14_synapse7 Execution function
void Connection14Synapse7Run(Connection14Synapse7* me);

#endif // CONNECTION14_SYNAPSE7_H_