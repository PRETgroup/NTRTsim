#ifndef CONNECTION12_SYNAPSE72_H_
#define CONNECTION12_SYNAPSE72_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse72 States
enum Connection12Synapse72States {
    CONNECTION12_SYNAPSE72_L,
};

// connection12_synapse72 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse72States state;
} Connection12Synapse72;

// connection12_synapse72 Initialisation function
void Connection12Synapse72Init(Connection12Synapse72* me);

// connection12_synapse72 Execution function
void Connection12Synapse72Run(Connection12Synapse72* me);

#endif // CONNECTION12_SYNAPSE72_H_