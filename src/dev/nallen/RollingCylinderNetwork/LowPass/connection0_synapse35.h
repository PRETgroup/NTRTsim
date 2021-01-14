#ifndef CONNECTION0_SYNAPSE35_H_
#define CONNECTION0_SYNAPSE35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse35 States
enum Connection0Synapse35States {
    CONNECTION0_SYNAPSE35_L,
};

// connection0_synapse35 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse35States state;
} Connection0Synapse35;

// connection0_synapse35 Initialisation function
void Connection0Synapse35Init(Connection0Synapse35* me);

// connection0_synapse35 Execution function
void Connection0Synapse35Run(Connection0Synapse35* me);

#endif // CONNECTION0_SYNAPSE35_H_