#ifndef CONNECTION11_SYNAPSE92_H_
#define CONNECTION11_SYNAPSE92_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse92 States
enum Connection11Synapse92States {
    CONNECTION11_SYNAPSE92_L,
};

// connection11_synapse92 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse92States state;
} Connection11Synapse92;

// connection11_synapse92 Initialisation function
void Connection11Synapse92Init(Connection11Synapse92* me);

// connection11_synapse92 Execution function
void Connection11Synapse92Run(Connection11Synapse92* me);

#endif // CONNECTION11_SYNAPSE92_H_