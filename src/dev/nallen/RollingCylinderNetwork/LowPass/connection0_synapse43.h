#ifndef CONNECTION0_SYNAPSE43_H_
#define CONNECTION0_SYNAPSE43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse43 States
enum Connection0Synapse43States {
    CONNECTION0_SYNAPSE43_L,
};

// connection0_synapse43 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse43States state;
} Connection0Synapse43;

// connection0_synapse43 Initialisation function
void Connection0Synapse43Init(Connection0Synapse43* me);

// connection0_synapse43 Execution function
void Connection0Synapse43Run(Connection0Synapse43* me);

#endif // CONNECTION0_SYNAPSE43_H_