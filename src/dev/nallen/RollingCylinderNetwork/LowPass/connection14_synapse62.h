#ifndef CONNECTION14_SYNAPSE62_H_
#define CONNECTION14_SYNAPSE62_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse62 States
enum Connection14Synapse62States {
    CONNECTION14_SYNAPSE62_L,
};

// connection14_synapse62 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse62States state;
} Connection14Synapse62;

// connection14_synapse62 Initialisation function
void Connection14Synapse62Init(Connection14Synapse62* me);

// connection14_synapse62 Execution function
void Connection14Synapse62Run(Connection14Synapse62* me);

#endif // CONNECTION14_SYNAPSE62_H_