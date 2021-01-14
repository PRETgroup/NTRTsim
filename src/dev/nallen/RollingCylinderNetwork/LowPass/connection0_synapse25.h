#ifndef CONNECTION0_SYNAPSE25_H_
#define CONNECTION0_SYNAPSE25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse25 States
enum Connection0Synapse25States {
    CONNECTION0_SYNAPSE25_L,
};

// connection0_synapse25 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse25States state;
} Connection0Synapse25;

// connection0_synapse25 Initialisation function
void Connection0Synapse25Init(Connection0Synapse25* me);

// connection0_synapse25 Execution function
void Connection0Synapse25Run(Connection0Synapse25* me);

#endif // CONNECTION0_SYNAPSE25_H_