#ifndef CONNECTION14_SYNAPSE38_H_
#define CONNECTION14_SYNAPSE38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse38 States
enum Connection14Synapse38States {
    CONNECTION14_SYNAPSE38_L,
};

// connection14_synapse38 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse38States state;
} Connection14Synapse38;

// connection14_synapse38 Initialisation function
void Connection14Synapse38Init(Connection14Synapse38* me);

// connection14_synapse38 Execution function
void Connection14Synapse38Run(Connection14Synapse38* me);

#endif // CONNECTION14_SYNAPSE38_H_