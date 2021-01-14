#ifndef CONNECTION6_SYNAPSE38_H_
#define CONNECTION6_SYNAPSE38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse38 States
enum Connection6Synapse38States {
    CONNECTION6_SYNAPSE38_L,
};

// connection6_synapse38 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse38States state;
} Connection6Synapse38;

// connection6_synapse38 Initialisation function
void Connection6Synapse38Init(Connection6Synapse38* me);

// connection6_synapse38 Execution function
void Connection6Synapse38Run(Connection6Synapse38* me);

#endif // CONNECTION6_SYNAPSE38_H_