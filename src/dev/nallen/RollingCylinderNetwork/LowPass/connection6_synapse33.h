#ifndef CONNECTION6_SYNAPSE33_H_
#define CONNECTION6_SYNAPSE33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse33 States
enum Connection6Synapse33States {
    CONNECTION6_SYNAPSE33_L,
};

// connection6_synapse33 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse33States state;
} Connection6Synapse33;

// connection6_synapse33 Initialisation function
void Connection6Synapse33Init(Connection6Synapse33* me);

// connection6_synapse33 Execution function
void Connection6Synapse33Run(Connection6Synapse33* me);

#endif // CONNECTION6_SYNAPSE33_H_