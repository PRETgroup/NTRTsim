#ifndef CONNECTION6_SYNAPSE21_H_
#define CONNECTION6_SYNAPSE21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse21 States
enum Connection6Synapse21States {
    CONNECTION6_SYNAPSE21_L,
};

// connection6_synapse21 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse21States state;
} Connection6Synapse21;

// connection6_synapse21 Initialisation function
void Connection6Synapse21Init(Connection6Synapse21* me);

// connection6_synapse21 Execution function
void Connection6Synapse21Run(Connection6Synapse21* me);

#endif // CONNECTION6_SYNAPSE21_H_