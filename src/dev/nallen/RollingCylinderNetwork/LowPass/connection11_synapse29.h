#ifndef CONNECTION11_SYNAPSE29_H_
#define CONNECTION11_SYNAPSE29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse29 States
enum Connection11Synapse29States {
    CONNECTION11_SYNAPSE29_L,
};

// connection11_synapse29 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse29States state;
} Connection11Synapse29;

// connection11_synapse29 Initialisation function
void Connection11Synapse29Init(Connection11Synapse29* me);

// connection11_synapse29 Execution function
void Connection11Synapse29Run(Connection11Synapse29* me);

#endif // CONNECTION11_SYNAPSE29_H_