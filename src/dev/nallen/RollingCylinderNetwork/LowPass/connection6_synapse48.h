#ifndef CONNECTION6_SYNAPSE48_H_
#define CONNECTION6_SYNAPSE48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse48 States
enum Connection6Synapse48States {
    CONNECTION6_SYNAPSE48_L,
};

// connection6_synapse48 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse48States state;
} Connection6Synapse48;

// connection6_synapse48 Initialisation function
void Connection6Synapse48Init(Connection6Synapse48* me);

// connection6_synapse48 Execution function
void Connection6Synapse48Run(Connection6Synapse48* me);

#endif // CONNECTION6_SYNAPSE48_H_