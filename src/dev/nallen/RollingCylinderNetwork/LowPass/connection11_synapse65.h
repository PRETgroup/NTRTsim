#ifndef CONNECTION11_SYNAPSE65_H_
#define CONNECTION11_SYNAPSE65_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse65 States
enum Connection11Synapse65States {
    CONNECTION11_SYNAPSE65_L,
};

// connection11_synapse65 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse65States state;
} Connection11Synapse65;

// connection11_synapse65 Initialisation function
void Connection11Synapse65Init(Connection11Synapse65* me);

// connection11_synapse65 Execution function
void Connection11Synapse65Run(Connection11Synapse65* me);

#endif // CONNECTION11_SYNAPSE65_H_