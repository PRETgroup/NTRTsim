#ifndef CONNECTION14_SYNAPSE43_H_
#define CONNECTION14_SYNAPSE43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse43 States
enum Connection14Synapse43States {
    CONNECTION14_SYNAPSE43_L,
};

// connection14_synapse43 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse43States state;
} Connection14Synapse43;

// connection14_synapse43 Initialisation function
void Connection14Synapse43Init(Connection14Synapse43* me);

// connection14_synapse43 Execution function
void Connection14Synapse43Run(Connection14Synapse43* me);

#endif // CONNECTION14_SYNAPSE43_H_