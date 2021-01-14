#ifndef CONNECTION0_SYNAPSE86_H_
#define CONNECTION0_SYNAPSE86_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse86 States
enum Connection0Synapse86States {
    CONNECTION0_SYNAPSE86_L,
};

// connection0_synapse86 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse86States state;
} Connection0Synapse86;

// connection0_synapse86 Initialisation function
void Connection0Synapse86Init(Connection0Synapse86* me);

// connection0_synapse86 Execution function
void Connection0Synapse86Run(Connection0Synapse86* me);

#endif // CONNECTION0_SYNAPSE86_H_