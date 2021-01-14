#ifndef CONNECTION0_SYNAPSE39_H_
#define CONNECTION0_SYNAPSE39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse39 States
enum Connection0Synapse39States {
    CONNECTION0_SYNAPSE39_L,
};

// connection0_synapse39 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse39States state;
} Connection0Synapse39;

// connection0_synapse39 Initialisation function
void Connection0Synapse39Init(Connection0Synapse39* me);

// connection0_synapse39 Execution function
void Connection0Synapse39Run(Connection0Synapse39* me);

#endif // CONNECTION0_SYNAPSE39_H_