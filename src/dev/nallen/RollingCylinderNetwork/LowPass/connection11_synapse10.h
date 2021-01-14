#ifndef CONNECTION11_SYNAPSE10_H_
#define CONNECTION11_SYNAPSE10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse10 States
enum Connection11Synapse10States {
    CONNECTION11_SYNAPSE10_L,
};

// connection11_synapse10 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse10States state;
} Connection11Synapse10;

// connection11_synapse10 Initialisation function
void Connection11Synapse10Init(Connection11Synapse10* me);

// connection11_synapse10 Execution function
void Connection11Synapse10Run(Connection11Synapse10* me);

#endif // CONNECTION11_SYNAPSE10_H_