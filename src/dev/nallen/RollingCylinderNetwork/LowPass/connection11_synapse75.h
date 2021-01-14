#ifndef CONNECTION11_SYNAPSE75_H_
#define CONNECTION11_SYNAPSE75_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse75 States
enum Connection11Synapse75States {
    CONNECTION11_SYNAPSE75_L,
};

// connection11_synapse75 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse75States state;
} Connection11Synapse75;

// connection11_synapse75 Initialisation function
void Connection11Synapse75Init(Connection11Synapse75* me);

// connection11_synapse75 Execution function
void Connection11Synapse75Run(Connection11Synapse75* me);

#endif // CONNECTION11_SYNAPSE75_H_