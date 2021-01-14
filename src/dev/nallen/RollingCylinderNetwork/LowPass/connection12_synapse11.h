#ifndef CONNECTION12_SYNAPSE11_H_
#define CONNECTION12_SYNAPSE11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse11 States
enum Connection12Synapse11States {
    CONNECTION12_SYNAPSE11_L,
};

// connection12_synapse11 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse11States state;
} Connection12Synapse11;

// connection12_synapse11 Initialisation function
void Connection12Synapse11Init(Connection12Synapse11* me);

// connection12_synapse11 Execution function
void Connection12Synapse11Run(Connection12Synapse11* me);

#endif // CONNECTION12_SYNAPSE11_H_