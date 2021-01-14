#ifndef CONNECTION12_SYNAPSE71_H_
#define CONNECTION12_SYNAPSE71_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse71 States
enum Connection12Synapse71States {
    CONNECTION12_SYNAPSE71_L,
};

// connection12_synapse71 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse71States state;
} Connection12Synapse71;

// connection12_synapse71 Initialisation function
void Connection12Synapse71Init(Connection12Synapse71* me);

// connection12_synapse71 Execution function
void Connection12Synapse71Run(Connection12Synapse71* me);

#endif // CONNECTION12_SYNAPSE71_H_