#ifndef CONNECTION6_SYNAPSE20_H_
#define CONNECTION6_SYNAPSE20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse20 States
enum Connection6Synapse20States {
    CONNECTION6_SYNAPSE20_L,
};

// connection6_synapse20 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse20States state;
} Connection6Synapse20;

// connection6_synapse20 Initialisation function
void Connection6Synapse20Init(Connection6Synapse20* me);

// connection6_synapse20 Execution function
void Connection6Synapse20Run(Connection6Synapse20* me);

#endif // CONNECTION6_SYNAPSE20_H_