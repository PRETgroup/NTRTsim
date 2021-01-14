#ifndef CONNECTION12_SYNAPSE47_H_
#define CONNECTION12_SYNAPSE47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse47 States
enum Connection12Synapse47States {
    CONNECTION12_SYNAPSE47_L,
};

// connection12_synapse47 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse47States state;
} Connection12Synapse47;

// connection12_synapse47 Initialisation function
void Connection12Synapse47Init(Connection12Synapse47* me);

// connection12_synapse47 Execution function
void Connection12Synapse47Run(Connection12Synapse47* me);

#endif // CONNECTION12_SYNAPSE47_H_