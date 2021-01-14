#ifndef CONNECTION14_SYNAPSE34_H_
#define CONNECTION14_SYNAPSE34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse34 States
enum Connection14Synapse34States {
    CONNECTION14_SYNAPSE34_L,
};

// connection14_synapse34 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse34States state;
} Connection14Synapse34;

// connection14_synapse34 Initialisation function
void Connection14Synapse34Init(Connection14Synapse34* me);

// connection14_synapse34 Execution function
void Connection14Synapse34Run(Connection14Synapse34* me);

#endif // CONNECTION14_SYNAPSE34_H_