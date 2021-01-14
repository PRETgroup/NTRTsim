#ifndef CONNECTION6_SYNAPSE7_H_
#define CONNECTION6_SYNAPSE7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse7 States
enum Connection6Synapse7States {
    CONNECTION6_SYNAPSE7_L,
};

// connection6_synapse7 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse7States state;
} Connection6Synapse7;

// connection6_synapse7 Initialisation function
void Connection6Synapse7Init(Connection6Synapse7* me);

// connection6_synapse7 Execution function
void Connection6Synapse7Run(Connection6Synapse7* me);

#endif // CONNECTION6_SYNAPSE7_H_