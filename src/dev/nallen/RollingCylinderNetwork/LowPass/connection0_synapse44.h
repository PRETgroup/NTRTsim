#ifndef CONNECTION0_SYNAPSE44_H_
#define CONNECTION0_SYNAPSE44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse44 States
enum Connection0Synapse44States {
    CONNECTION0_SYNAPSE44_L,
};

// connection0_synapse44 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse44States state;
} Connection0Synapse44;

// connection0_synapse44 Initialisation function
void Connection0Synapse44Init(Connection0Synapse44* me);

// connection0_synapse44 Execution function
void Connection0Synapse44Run(Connection0Synapse44* me);

#endif // CONNECTION0_SYNAPSE44_H_