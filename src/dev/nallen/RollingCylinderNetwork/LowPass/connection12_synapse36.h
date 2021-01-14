#ifndef CONNECTION12_SYNAPSE36_H_
#define CONNECTION12_SYNAPSE36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse36 States
enum Connection12Synapse36States {
    CONNECTION12_SYNAPSE36_L,
};

// connection12_synapse36 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse36States state;
} Connection12Synapse36;

// connection12_synapse36 Initialisation function
void Connection12Synapse36Init(Connection12Synapse36* me);

// connection12_synapse36 Execution function
void Connection12Synapse36Run(Connection12Synapse36* me);

#endif // CONNECTION12_SYNAPSE36_H_