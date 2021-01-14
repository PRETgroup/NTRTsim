#ifndef CONNECTION11_SYNAPSE67_H_
#define CONNECTION11_SYNAPSE67_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse67 States
enum Connection11Synapse67States {
    CONNECTION11_SYNAPSE67_L,
};

// connection11_synapse67 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse67States state;
} Connection11Synapse67;

// connection11_synapse67 Initialisation function
void Connection11Synapse67Init(Connection11Synapse67* me);

// connection11_synapse67 Execution function
void Connection11Synapse67Run(Connection11Synapse67* me);

#endif // CONNECTION11_SYNAPSE67_H_