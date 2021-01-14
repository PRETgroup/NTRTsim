#ifndef CONNECTION12_SYNAPSE43_H_
#define CONNECTION12_SYNAPSE43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse43 States
enum Connection12Synapse43States {
    CONNECTION12_SYNAPSE43_L,
};

// connection12_synapse43 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse43States state;
} Connection12Synapse43;

// connection12_synapse43 Initialisation function
void Connection12Synapse43Init(Connection12Synapse43* me);

// connection12_synapse43 Execution function
void Connection12Synapse43Run(Connection12Synapse43* me);

#endif // CONNECTION12_SYNAPSE43_H_