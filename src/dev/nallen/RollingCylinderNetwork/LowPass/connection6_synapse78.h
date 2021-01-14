#ifndef CONNECTION6_SYNAPSE78_H_
#define CONNECTION6_SYNAPSE78_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse78 States
enum Connection6Synapse78States {
    CONNECTION6_SYNAPSE78_L,
};

// connection6_synapse78 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse78States state;
} Connection6Synapse78;

// connection6_synapse78 Initialisation function
void Connection6Synapse78Init(Connection6Synapse78* me);

// connection6_synapse78 Execution function
void Connection6Synapse78Run(Connection6Synapse78* me);

#endif // CONNECTION6_SYNAPSE78_H_