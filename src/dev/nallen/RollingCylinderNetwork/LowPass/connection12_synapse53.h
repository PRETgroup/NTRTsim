#ifndef CONNECTION12_SYNAPSE53_H_
#define CONNECTION12_SYNAPSE53_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse53 States
enum Connection12Synapse53States {
    CONNECTION12_SYNAPSE53_L,
};

// connection12_synapse53 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse53States state;
} Connection12Synapse53;

// connection12_synapse53 Initialisation function
void Connection12Synapse53Init(Connection12Synapse53* me);

// connection12_synapse53 Execution function
void Connection12Synapse53Run(Connection12Synapse53* me);

#endif // CONNECTION12_SYNAPSE53_H_