#ifndef CONNECTION14_SYNAPSE24_H_
#define CONNECTION14_SYNAPSE24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse24 States
enum Connection14Synapse24States {
    CONNECTION14_SYNAPSE24_L,
};

// connection14_synapse24 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse24States state;
} Connection14Synapse24;

// connection14_synapse24 Initialisation function
void Connection14Synapse24Init(Connection14Synapse24* me);

// connection14_synapse24 Execution function
void Connection14Synapse24Run(Connection14Synapse24* me);

#endif // CONNECTION14_SYNAPSE24_H_