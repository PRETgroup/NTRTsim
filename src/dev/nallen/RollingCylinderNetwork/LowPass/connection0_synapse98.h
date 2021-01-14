#ifndef CONNECTION0_SYNAPSE98_H_
#define CONNECTION0_SYNAPSE98_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse98 States
enum Connection0Synapse98States {
    CONNECTION0_SYNAPSE98_L,
};

// connection0_synapse98 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse98States state;
} Connection0Synapse98;

// connection0_synapse98 Initialisation function
void Connection0Synapse98Init(Connection0Synapse98* me);

// connection0_synapse98 Execution function
void Connection0Synapse98Run(Connection0Synapse98* me);

#endif // CONNECTION0_SYNAPSE98_H_