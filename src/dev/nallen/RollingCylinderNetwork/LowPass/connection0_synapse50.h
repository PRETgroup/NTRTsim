#ifndef CONNECTION0_SYNAPSE50_H_
#define CONNECTION0_SYNAPSE50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse50 States
enum Connection0Synapse50States {
    CONNECTION0_SYNAPSE50_L,
};

// connection0_synapse50 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse50States state;
} Connection0Synapse50;

// connection0_synapse50 Initialisation function
void Connection0Synapse50Init(Connection0Synapse50* me);

// connection0_synapse50 Execution function
void Connection0Synapse50Run(Connection0Synapse50* me);

#endif // CONNECTION0_SYNAPSE50_H_