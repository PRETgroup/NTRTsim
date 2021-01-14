#ifndef CONNECTION6_SYNAPSE12_H_
#define CONNECTION6_SYNAPSE12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse12 States
enum Connection6Synapse12States {
    CONNECTION6_SYNAPSE12_L,
};

// connection6_synapse12 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse12States state;
} Connection6Synapse12;

// connection6_synapse12 Initialisation function
void Connection6Synapse12Init(Connection6Synapse12* me);

// connection6_synapse12 Execution function
void Connection6Synapse12Run(Connection6Synapse12* me);

#endif // CONNECTION6_SYNAPSE12_H_