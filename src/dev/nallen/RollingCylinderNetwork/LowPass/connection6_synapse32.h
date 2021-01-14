#ifndef CONNECTION6_SYNAPSE32_H_
#define CONNECTION6_SYNAPSE32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse32 States
enum Connection6Synapse32States {
    CONNECTION6_SYNAPSE32_L,
};

// connection6_synapse32 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse32States state;
} Connection6Synapse32;

// connection6_synapse32 Initialisation function
void Connection6Synapse32Init(Connection6Synapse32* me);

// connection6_synapse32 Execution function
void Connection6Synapse32Run(Connection6Synapse32* me);

#endif // CONNECTION6_SYNAPSE32_H_