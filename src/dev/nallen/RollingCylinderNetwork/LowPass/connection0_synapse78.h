#ifndef CONNECTION0_SYNAPSE78_H_
#define CONNECTION0_SYNAPSE78_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse78 States
enum Connection0Synapse78States {
    CONNECTION0_SYNAPSE78_L,
};

// connection0_synapse78 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse78States state;
} Connection0Synapse78;

// connection0_synapse78 Initialisation function
void Connection0Synapse78Init(Connection0Synapse78* me);

// connection0_synapse78 Execution function
void Connection0Synapse78Run(Connection0Synapse78* me);

#endif // CONNECTION0_SYNAPSE78_H_