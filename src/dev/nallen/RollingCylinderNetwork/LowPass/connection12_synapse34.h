#ifndef CONNECTION12_SYNAPSE34_H_
#define CONNECTION12_SYNAPSE34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse34 States
enum Connection12Synapse34States {
    CONNECTION12_SYNAPSE34_L,
};

// connection12_synapse34 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse34States state;
} Connection12Synapse34;

// connection12_synapse34 Initialisation function
void Connection12Synapse34Init(Connection12Synapse34* me);

// connection12_synapse34 Execution function
void Connection12Synapse34Run(Connection12Synapse34* me);

#endif // CONNECTION12_SYNAPSE34_H_