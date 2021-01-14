#ifndef CONNECTION12_SYNAPSE48_H_
#define CONNECTION12_SYNAPSE48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse48 States
enum Connection12Synapse48States {
    CONNECTION12_SYNAPSE48_L,
};

// connection12_synapse48 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse48States state;
} Connection12Synapse48;

// connection12_synapse48 Initialisation function
void Connection12Synapse48Init(Connection12Synapse48* me);

// connection12_synapse48 Execution function
void Connection12Synapse48Run(Connection12Synapse48* me);

#endif // CONNECTION12_SYNAPSE48_H_