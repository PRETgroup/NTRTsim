#ifndef CONNECTION6_SYNAPSE96_H_
#define CONNECTION6_SYNAPSE96_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse96 States
enum Connection6Synapse96States {
    CONNECTION6_SYNAPSE96_L,
};

// connection6_synapse96 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse96States state;
} Connection6Synapse96;

// connection6_synapse96 Initialisation function
void Connection6Synapse96Init(Connection6Synapse96* me);

// connection6_synapse96 Execution function
void Connection6Synapse96Run(Connection6Synapse96* me);

#endif // CONNECTION6_SYNAPSE96_H_