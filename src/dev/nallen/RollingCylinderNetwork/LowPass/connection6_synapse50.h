#ifndef CONNECTION6_SYNAPSE50_H_
#define CONNECTION6_SYNAPSE50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse50 States
enum Connection6Synapse50States {
    CONNECTION6_SYNAPSE50_L,
};

// connection6_synapse50 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse50States state;
} Connection6Synapse50;

// connection6_synapse50 Initialisation function
void Connection6Synapse50Init(Connection6Synapse50* me);

// connection6_synapse50 Execution function
void Connection6Synapse50Run(Connection6Synapse50* me);

#endif // CONNECTION6_SYNAPSE50_H_