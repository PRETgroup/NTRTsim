#ifndef CONNECTION6_SYNAPSE25_H_
#define CONNECTION6_SYNAPSE25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse25 States
enum Connection6Synapse25States {
    CONNECTION6_SYNAPSE25_L,
};

// connection6_synapse25 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse25States state;
} Connection6Synapse25;

// connection6_synapse25 Initialisation function
void Connection6Synapse25Init(Connection6Synapse25* me);

// connection6_synapse25 Execution function
void Connection6Synapse25Run(Connection6Synapse25* me);

#endif // CONNECTION6_SYNAPSE25_H_