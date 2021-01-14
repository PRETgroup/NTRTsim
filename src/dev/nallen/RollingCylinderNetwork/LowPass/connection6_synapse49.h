#ifndef CONNECTION6_SYNAPSE49_H_
#define CONNECTION6_SYNAPSE49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse49 States
enum Connection6Synapse49States {
    CONNECTION6_SYNAPSE49_L,
};

// connection6_synapse49 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse49States state;
} Connection6Synapse49;

// connection6_synapse49 Initialisation function
void Connection6Synapse49Init(Connection6Synapse49* me);

// connection6_synapse49 Execution function
void Connection6Synapse49Run(Connection6Synapse49* me);

#endif // CONNECTION6_SYNAPSE49_H_