#ifndef CONNECTION0_SYNAPSE88_H_
#define CONNECTION0_SYNAPSE88_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse88 States
enum Connection0Synapse88States {
    CONNECTION0_SYNAPSE88_L,
};

// connection0_synapse88 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse88States state;
} Connection0Synapse88;

// connection0_synapse88 Initialisation function
void Connection0Synapse88Init(Connection0Synapse88* me);

// connection0_synapse88 Execution function
void Connection0Synapse88Run(Connection0Synapse88* me);

#endif // CONNECTION0_SYNAPSE88_H_