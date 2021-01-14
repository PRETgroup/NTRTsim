#ifndef CONNECTION11_SYNAPSE46_H_
#define CONNECTION11_SYNAPSE46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse46 States
enum Connection11Synapse46States {
    CONNECTION11_SYNAPSE46_L,
};

// connection11_synapse46 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse46States state;
} Connection11Synapse46;

// connection11_synapse46 Initialisation function
void Connection11Synapse46Init(Connection11Synapse46* me);

// connection11_synapse46 Execution function
void Connection11Synapse46Run(Connection11Synapse46* me);

#endif // CONNECTION11_SYNAPSE46_H_