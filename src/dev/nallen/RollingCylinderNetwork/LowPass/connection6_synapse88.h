#ifndef CONNECTION6_SYNAPSE88_H_
#define CONNECTION6_SYNAPSE88_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse88 States
enum Connection6Synapse88States {
    CONNECTION6_SYNAPSE88_L,
};

// connection6_synapse88 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse88States state;
} Connection6Synapse88;

// connection6_synapse88 Initialisation function
void Connection6Synapse88Init(Connection6Synapse88* me);

// connection6_synapse88 Execution function
void Connection6Synapse88Run(Connection6Synapse88* me);

#endif // CONNECTION6_SYNAPSE88_H_