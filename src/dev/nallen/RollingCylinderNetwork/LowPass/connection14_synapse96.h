#ifndef CONNECTION14_SYNAPSE96_H_
#define CONNECTION14_SYNAPSE96_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse96 States
enum Connection14Synapse96States {
    CONNECTION14_SYNAPSE96_L,
};

// connection14_synapse96 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse96States state;
} Connection14Synapse96;

// connection14_synapse96 Initialisation function
void Connection14Synapse96Init(Connection14Synapse96* me);

// connection14_synapse96 Execution function
void Connection14Synapse96Run(Connection14Synapse96* me);

#endif // CONNECTION14_SYNAPSE96_H_