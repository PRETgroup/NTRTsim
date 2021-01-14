#ifndef CONNECTION11_SYNAPSE95_H_
#define CONNECTION11_SYNAPSE95_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse95 States
enum Connection11Synapse95States {
    CONNECTION11_SYNAPSE95_L,
};

// connection11_synapse95 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse95States state;
} Connection11Synapse95;

// connection11_synapse95 Initialisation function
void Connection11Synapse95Init(Connection11Synapse95* me);

// connection11_synapse95 Execution function
void Connection11Synapse95Run(Connection11Synapse95* me);

#endif // CONNECTION11_SYNAPSE95_H_