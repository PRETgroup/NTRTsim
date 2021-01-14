#ifndef CONNECTION0_SYNAPSE32_H_
#define CONNECTION0_SYNAPSE32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse32 States
enum Connection0Synapse32States {
    CONNECTION0_SYNAPSE32_L,
};

// connection0_synapse32 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse32States state;
} Connection0Synapse32;

// connection0_synapse32 Initialisation function
void Connection0Synapse32Init(Connection0Synapse32* me);

// connection0_synapse32 Execution function
void Connection0Synapse32Run(Connection0Synapse32* me);

#endif // CONNECTION0_SYNAPSE32_H_