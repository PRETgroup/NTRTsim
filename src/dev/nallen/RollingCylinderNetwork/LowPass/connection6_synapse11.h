#ifndef CONNECTION6_SYNAPSE11_H_
#define CONNECTION6_SYNAPSE11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse11 States
enum Connection6Synapse11States {
    CONNECTION6_SYNAPSE11_L,
};

// connection6_synapse11 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse11States state;
} Connection6Synapse11;

// connection6_synapse11 Initialisation function
void Connection6Synapse11Init(Connection6Synapse11* me);

// connection6_synapse11 Execution function
void Connection6Synapse11Run(Connection6Synapse11* me);

#endif // CONNECTION6_SYNAPSE11_H_