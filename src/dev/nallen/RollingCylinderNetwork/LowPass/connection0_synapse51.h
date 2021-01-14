#ifndef CONNECTION0_SYNAPSE51_H_
#define CONNECTION0_SYNAPSE51_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse51 States
enum Connection0Synapse51States {
    CONNECTION0_SYNAPSE51_L,
};

// connection0_synapse51 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse51States state;
} Connection0Synapse51;

// connection0_synapse51 Initialisation function
void Connection0Synapse51Init(Connection0Synapse51* me);

// connection0_synapse51 Execution function
void Connection0Synapse51Run(Connection0Synapse51* me);

#endif // CONNECTION0_SYNAPSE51_H_