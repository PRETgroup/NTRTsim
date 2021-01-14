#ifndef CONNECTION14_SYNAPSE12_H_
#define CONNECTION14_SYNAPSE12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse12 States
enum Connection14Synapse12States {
    CONNECTION14_SYNAPSE12_L,
};

// connection14_synapse12 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse12States state;
} Connection14Synapse12;

// connection14_synapse12 Initialisation function
void Connection14Synapse12Init(Connection14Synapse12* me);

// connection14_synapse12 Execution function
void Connection14Synapse12Run(Connection14Synapse12* me);

#endif // CONNECTION14_SYNAPSE12_H_