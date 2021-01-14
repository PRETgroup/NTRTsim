#ifndef CONNECTION11_SYNAPSE15_H_
#define CONNECTION11_SYNAPSE15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse15 States
enum Connection11Synapse15States {
    CONNECTION11_SYNAPSE15_L,
};

// connection11_synapse15 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse15States state;
} Connection11Synapse15;

// connection11_synapse15 Initialisation function
void Connection11Synapse15Init(Connection11Synapse15* me);

// connection11_synapse15 Execution function
void Connection11Synapse15Run(Connection11Synapse15* me);

#endif // CONNECTION11_SYNAPSE15_H_