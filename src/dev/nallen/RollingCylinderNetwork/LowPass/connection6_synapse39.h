#ifndef CONNECTION6_SYNAPSE39_H_
#define CONNECTION6_SYNAPSE39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse39 States
enum Connection6Synapse39States {
    CONNECTION6_SYNAPSE39_L,
};

// connection6_synapse39 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse39States state;
} Connection6Synapse39;

// connection6_synapse39 Initialisation function
void Connection6Synapse39Init(Connection6Synapse39* me);

// connection6_synapse39 Execution function
void Connection6Synapse39Run(Connection6Synapse39* me);

#endif // CONNECTION6_SYNAPSE39_H_