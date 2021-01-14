#ifndef CONNECTION0_SYNAPSE20_H_
#define CONNECTION0_SYNAPSE20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse20 States
enum Connection0Synapse20States {
    CONNECTION0_SYNAPSE20_L,
};

// connection0_synapse20 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse20States state;
} Connection0Synapse20;

// connection0_synapse20 Initialisation function
void Connection0Synapse20Init(Connection0Synapse20* me);

// connection0_synapse20 Execution function
void Connection0Synapse20Run(Connection0Synapse20* me);

#endif // CONNECTION0_SYNAPSE20_H_