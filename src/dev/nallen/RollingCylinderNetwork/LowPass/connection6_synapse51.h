#ifndef CONNECTION6_SYNAPSE51_H_
#define CONNECTION6_SYNAPSE51_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse51 States
enum Connection6Synapse51States {
    CONNECTION6_SYNAPSE51_L,
};

// connection6_synapse51 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse51States state;
} Connection6Synapse51;

// connection6_synapse51 Initialisation function
void Connection6Synapse51Init(Connection6Synapse51* me);

// connection6_synapse51 Execution function
void Connection6Synapse51Run(Connection6Synapse51* me);

#endif // CONNECTION6_SYNAPSE51_H_