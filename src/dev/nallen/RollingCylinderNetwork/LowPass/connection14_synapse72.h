#ifndef CONNECTION14_SYNAPSE72_H_
#define CONNECTION14_SYNAPSE72_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse72 States
enum Connection14Synapse72States {
    CONNECTION14_SYNAPSE72_L,
};

// connection14_synapse72 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse72States state;
} Connection14Synapse72;

// connection14_synapse72 Initialisation function
void Connection14Synapse72Init(Connection14Synapse72* me);

// connection14_synapse72 Execution function
void Connection14Synapse72Run(Connection14Synapse72* me);

#endif // CONNECTION14_SYNAPSE72_H_