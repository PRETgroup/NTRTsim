#ifndef CONNECTION0_SYNAPSE38_H_
#define CONNECTION0_SYNAPSE38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse38 States
enum Connection0Synapse38States {
    CONNECTION0_SYNAPSE38_L,
};

// connection0_synapse38 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse38States state;
} Connection0Synapse38;

// connection0_synapse38 Initialisation function
void Connection0Synapse38Init(Connection0Synapse38* me);

// connection0_synapse38 Execution function
void Connection0Synapse38Run(Connection0Synapse38* me);

#endif // CONNECTION0_SYNAPSE38_H_