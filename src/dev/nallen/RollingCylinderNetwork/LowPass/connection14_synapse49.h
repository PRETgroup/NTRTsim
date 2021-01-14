#ifndef CONNECTION14_SYNAPSE49_H_
#define CONNECTION14_SYNAPSE49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse49 States
enum Connection14Synapse49States {
    CONNECTION14_SYNAPSE49_L,
};

// connection14_synapse49 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse49States state;
} Connection14Synapse49;

// connection14_synapse49 Initialisation function
void Connection14Synapse49Init(Connection14Synapse49* me);

// connection14_synapse49 Execution function
void Connection14Synapse49Run(Connection14Synapse49* me);

#endif // CONNECTION14_SYNAPSE49_H_