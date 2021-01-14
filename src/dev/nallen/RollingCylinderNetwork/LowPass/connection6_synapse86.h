#ifndef CONNECTION6_SYNAPSE86_H_
#define CONNECTION6_SYNAPSE86_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse86 States
enum Connection6Synapse86States {
    CONNECTION6_SYNAPSE86_L,
};

// connection6_synapse86 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse86States state;
} Connection6Synapse86;

// connection6_synapse86 Initialisation function
void Connection6Synapse86Init(Connection6Synapse86* me);

// connection6_synapse86 Execution function
void Connection6Synapse86Run(Connection6Synapse86* me);

#endif // CONNECTION6_SYNAPSE86_H_