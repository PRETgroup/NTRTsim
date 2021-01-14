#ifndef CONNECTION6_SYNAPSE13_H_
#define CONNECTION6_SYNAPSE13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse13 States
enum Connection6Synapse13States {
    CONNECTION6_SYNAPSE13_L,
};

// connection6_synapse13 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse13States state;
} Connection6Synapse13;

// connection6_synapse13 Initialisation function
void Connection6Synapse13Init(Connection6Synapse13* me);

// connection6_synapse13 Execution function
void Connection6Synapse13Run(Connection6Synapse13* me);

#endif // CONNECTION6_SYNAPSE13_H_