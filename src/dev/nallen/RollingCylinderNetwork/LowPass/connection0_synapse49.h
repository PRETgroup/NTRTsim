#ifndef CONNECTION0_SYNAPSE49_H_
#define CONNECTION0_SYNAPSE49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse49 States
enum Connection0Synapse49States {
    CONNECTION0_SYNAPSE49_L,
};

// connection0_synapse49 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse49States state;
} Connection0Synapse49;

// connection0_synapse49 Initialisation function
void Connection0Synapse49Init(Connection0Synapse49* me);

// connection0_synapse49 Execution function
void Connection0Synapse49Run(Connection0Synapse49* me);

#endif // CONNECTION0_SYNAPSE49_H_