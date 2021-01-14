#ifndef CONNECTION0_SYNAPSE21_H_
#define CONNECTION0_SYNAPSE21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse21 States
enum Connection0Synapse21States {
    CONNECTION0_SYNAPSE21_L,
};

// connection0_synapse21 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse21States state;
} Connection0Synapse21;

// connection0_synapse21 Initialisation function
void Connection0Synapse21Init(Connection0Synapse21* me);

// connection0_synapse21 Execution function
void Connection0Synapse21Run(Connection0Synapse21* me);

#endif // CONNECTION0_SYNAPSE21_H_