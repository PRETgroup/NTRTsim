#ifndef CONNECTION14_SYNAPSE90_H_
#define CONNECTION14_SYNAPSE90_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse90 States
enum Connection14Synapse90States {
    CONNECTION14_SYNAPSE90_L,
};

// connection14_synapse90 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse90States state;
} Connection14Synapse90;

// connection14_synapse90 Initialisation function
void Connection14Synapse90Init(Connection14Synapse90* me);

// connection14_synapse90 Execution function
void Connection14Synapse90Run(Connection14Synapse90* me);

#endif // CONNECTION14_SYNAPSE90_H_