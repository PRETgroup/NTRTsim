#ifndef CONNECTION14_SYNAPSE32_H_
#define CONNECTION14_SYNAPSE32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse32 States
enum Connection14Synapse32States {
    CONNECTION14_SYNAPSE32_L,
};

// connection14_synapse32 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse32States state;
} Connection14Synapse32;

// connection14_synapse32 Initialisation function
void Connection14Synapse32Init(Connection14Synapse32* me);

// connection14_synapse32 Execution function
void Connection14Synapse32Run(Connection14Synapse32* me);

#endif // CONNECTION14_SYNAPSE32_H_