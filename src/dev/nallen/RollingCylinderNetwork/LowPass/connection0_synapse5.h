#ifndef CONNECTION0_SYNAPSE5_H_
#define CONNECTION0_SYNAPSE5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse5 States
enum Connection0Synapse5States {
    CONNECTION0_SYNAPSE5_L,
};

// connection0_synapse5 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse5States state;
} Connection0Synapse5;

// connection0_synapse5 Initialisation function
void Connection0Synapse5Init(Connection0Synapse5* me);

// connection0_synapse5 Execution function
void Connection0Synapse5Run(Connection0Synapse5* me);

#endif // CONNECTION0_SYNAPSE5_H_