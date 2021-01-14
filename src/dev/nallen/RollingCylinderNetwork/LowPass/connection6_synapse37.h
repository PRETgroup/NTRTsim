#ifndef CONNECTION6_SYNAPSE37_H_
#define CONNECTION6_SYNAPSE37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse37 States
enum Connection6Synapse37States {
    CONNECTION6_SYNAPSE37_L,
};

// connection6_synapse37 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse37States state;
} Connection6Synapse37;

// connection6_synapse37 Initialisation function
void Connection6Synapse37Init(Connection6Synapse37* me);

// connection6_synapse37 Execution function
void Connection6Synapse37Run(Connection6Synapse37* me);

#endif // CONNECTION6_SYNAPSE37_H_