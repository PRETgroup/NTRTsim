#ifndef CONNECTION12_SYNAPSE24_H_
#define CONNECTION12_SYNAPSE24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse24 States
enum Connection12Synapse24States {
    CONNECTION12_SYNAPSE24_L,
};

// connection12_synapse24 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse24States state;
} Connection12Synapse24;

// connection12_synapse24 Initialisation function
void Connection12Synapse24Init(Connection12Synapse24* me);

// connection12_synapse24 Execution function
void Connection12Synapse24Run(Connection12Synapse24* me);

#endif // CONNECTION12_SYNAPSE24_H_