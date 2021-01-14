#ifndef CONNECTION6_SYNAPSE54_H_
#define CONNECTION6_SYNAPSE54_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse54 States
enum Connection6Synapse54States {
    CONNECTION6_SYNAPSE54_L,
};

// connection6_synapse54 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse54States state;
} Connection6Synapse54;

// connection6_synapse54 Initialisation function
void Connection6Synapse54Init(Connection6Synapse54* me);

// connection6_synapse54 Execution function
void Connection6Synapse54Run(Connection6Synapse54* me);

#endif // CONNECTION6_SYNAPSE54_H_