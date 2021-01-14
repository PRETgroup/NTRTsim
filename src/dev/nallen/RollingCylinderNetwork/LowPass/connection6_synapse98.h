#ifndef CONNECTION6_SYNAPSE98_H_
#define CONNECTION6_SYNAPSE98_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse98 States
enum Connection6Synapse98States {
    CONNECTION6_SYNAPSE98_L,
};

// connection6_synapse98 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse98States state;
} Connection6Synapse98;

// connection6_synapse98 Initialisation function
void Connection6Synapse98Init(Connection6Synapse98* me);

// connection6_synapse98 Execution function
void Connection6Synapse98Run(Connection6Synapse98* me);

#endif // CONNECTION6_SYNAPSE98_H_