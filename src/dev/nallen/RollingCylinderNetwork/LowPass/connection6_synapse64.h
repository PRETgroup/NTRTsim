#ifndef CONNECTION6_SYNAPSE64_H_
#define CONNECTION6_SYNAPSE64_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse64 States
enum Connection6Synapse64States {
    CONNECTION6_SYNAPSE64_L,
};

// connection6_synapse64 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse64States state;
} Connection6Synapse64;

// connection6_synapse64 Initialisation function
void Connection6Synapse64Init(Connection6Synapse64* me);

// connection6_synapse64 Execution function
void Connection6Synapse64Run(Connection6Synapse64* me);

#endif // CONNECTION6_SYNAPSE64_H_