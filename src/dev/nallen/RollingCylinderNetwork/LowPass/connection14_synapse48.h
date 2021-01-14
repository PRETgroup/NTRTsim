#ifndef CONNECTION14_SYNAPSE48_H_
#define CONNECTION14_SYNAPSE48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse48 States
enum Connection14Synapse48States {
    CONNECTION14_SYNAPSE48_L,
};

// connection14_synapse48 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse48States state;
} Connection14Synapse48;

// connection14_synapse48 Initialisation function
void Connection14Synapse48Init(Connection14Synapse48* me);

// connection14_synapse48 Execution function
void Connection14Synapse48Run(Connection14Synapse48* me);

#endif // CONNECTION14_SYNAPSE48_H_