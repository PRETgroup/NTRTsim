#ifndef CONNECTION0_SYNAPSE54_H_
#define CONNECTION0_SYNAPSE54_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse54 States
enum Connection0Synapse54States {
    CONNECTION0_SYNAPSE54_L,
};

// connection0_synapse54 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse54States state;
} Connection0Synapse54;

// connection0_synapse54 Initialisation function
void Connection0Synapse54Init(Connection0Synapse54* me);

// connection0_synapse54 Execution function
void Connection0Synapse54Run(Connection0Synapse54* me);

#endif // CONNECTION0_SYNAPSE54_H_