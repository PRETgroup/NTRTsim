#ifndef CONNECTION6_SYNAPSE5_H_
#define CONNECTION6_SYNAPSE5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse5 States
enum Connection6Synapse5States {
    CONNECTION6_SYNAPSE5_L,
};

// connection6_synapse5 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse5States state;
} Connection6Synapse5;

// connection6_synapse5 Initialisation function
void Connection6Synapse5Init(Connection6Synapse5* me);

// connection6_synapse5 Execution function
void Connection6Synapse5Run(Connection6Synapse5* me);

#endif // CONNECTION6_SYNAPSE5_H_