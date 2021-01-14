#ifndef CONNECTION0_SYNAPSE96_H_
#define CONNECTION0_SYNAPSE96_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse96 States
enum Connection0Synapse96States {
    CONNECTION0_SYNAPSE96_L,
};

// connection0_synapse96 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse96States state;
} Connection0Synapse96;

// connection0_synapse96 Initialisation function
void Connection0Synapse96Init(Connection0Synapse96* me);

// connection0_synapse96 Execution function
void Connection0Synapse96Run(Connection0Synapse96* me);

#endif // CONNECTION0_SYNAPSE96_H_