#ifndef CONNECTION0_SYNAPSE12_H_
#define CONNECTION0_SYNAPSE12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse12 States
enum Connection0Synapse12States {
    CONNECTION0_SYNAPSE12_L,
};

// connection0_synapse12 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse12States state;
} Connection0Synapse12;

// connection0_synapse12 Initialisation function
void Connection0Synapse12Init(Connection0Synapse12* me);

// connection0_synapse12 Execution function
void Connection0Synapse12Run(Connection0Synapse12* me);

#endif // CONNECTION0_SYNAPSE12_H_