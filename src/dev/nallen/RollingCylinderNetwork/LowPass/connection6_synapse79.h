#ifndef CONNECTION6_SYNAPSE79_H_
#define CONNECTION6_SYNAPSE79_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse79 States
enum Connection6Synapse79States {
    CONNECTION6_SYNAPSE79_L,
};

// connection6_synapse79 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse79States state;
} Connection6Synapse79;

// connection6_synapse79 Initialisation function
void Connection6Synapse79Init(Connection6Synapse79* me);

// connection6_synapse79 Execution function
void Connection6Synapse79Run(Connection6Synapse79* me);

#endif // CONNECTION6_SYNAPSE79_H_