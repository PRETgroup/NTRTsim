#ifndef CONNECTION6_SYNAPSE35_H_
#define CONNECTION6_SYNAPSE35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse35 States
enum Connection6Synapse35States {
    CONNECTION6_SYNAPSE35_L,
};

// connection6_synapse35 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse35States state;
} Connection6Synapse35;

// connection6_synapse35 Initialisation function
void Connection6Synapse35Init(Connection6Synapse35* me);

// connection6_synapse35 Execution function
void Connection6Synapse35Run(Connection6Synapse35* me);

#endif // CONNECTION6_SYNAPSE35_H_