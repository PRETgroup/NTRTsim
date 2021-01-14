#ifndef CONNECTION0_SYNAPSE37_H_
#define CONNECTION0_SYNAPSE37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse37 States
enum Connection0Synapse37States {
    CONNECTION0_SYNAPSE37_L,
};

// connection0_synapse37 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse37States state;
} Connection0Synapse37;

// connection0_synapse37 Initialisation function
void Connection0Synapse37Init(Connection0Synapse37* me);

// connection0_synapse37 Execution function
void Connection0Synapse37Run(Connection0Synapse37* me);

#endif // CONNECTION0_SYNAPSE37_H_